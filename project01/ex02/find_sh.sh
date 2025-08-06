#!/bin/bash
find "$PWD" -name "*.sh" -execdir basename {} .sh ';'
