#!/usr/bin/ruby -w

require 'socket'

server = TCPServer.new 6969

loop do
  Thread.start(server.accept) do |client|
    while line = client.gets do puts line end
    client.close
  end
end
