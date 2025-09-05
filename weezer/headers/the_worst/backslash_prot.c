char parse_escape(char c1, char c2) {
    if (c1 != '\\') return c1; // not an escape
    switch (c2) {
        case 'n': return '\n'; // newline escape
        case '\\': return '\\'; // backslash
        // add others as needed
        default: return c2; // unknown: ignore backslash
    }
}

