FROM gcc:latest

RUN apt update && \
    apt install -y g++ cmake

WORKDIR /server
COPY . /server/

RUN make build

ENTRYPOINT [ "./server" ]