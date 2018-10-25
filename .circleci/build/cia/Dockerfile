#FROM takitake/gradle-alpine
FROM ubuntu:18.04

MAINTAINER Yusuke Sasajima <rpg.360.c@gmail.com>

CMD echo "now running..."

RUN mkdir -p /opt/workdir
WORKDIR /opt/workdir

#EXPOSE 80

RUN sed -i.bak -e "s%http://us.archive.ubuntu.com/ubuntu/%http://ftp.iij.ad.jp/pub/linux/ubuntu/archive/%g" /etc/apt/sources.list
RUN \
    apt-get update && \
    apt-get -y install unzip openjdk-8-jdk curl

# Download and install Gradle
RUN \
    cd /usr/local && \
    curl -L https://services.gradle.org/distributions/gradle-4.8.1-bin.zip -o gradle-4.8.1-bin.zip && \
    unzip gradle-4.8.1-bin.zip && \
    rm gradle-4.8.1-bin.zip

# Export some environment variables
ENV GRADLE_HOME=/usr/local/gradle-4.8.1
ENV PATH=$PATH:$GRADLE_HOME/bin JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64

RUN mkdir -p /opt/cia
WORKDIR /opt/cia

COPY /home/sasajima/spring/test/* /opt/cia

RUN ls -l /opt/cia

RUN ./gradlew clean build

