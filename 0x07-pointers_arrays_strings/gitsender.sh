#!/bin/bash
git add .
echo "enter commmit message"
read message
git commit -m "$message"
git push
