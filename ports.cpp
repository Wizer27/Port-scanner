#include "ports.h"







const std::unordered_map<int, std::string> PORTS = {
    {20, "FTP Data"},
    {21, "FTP Control"},
    {22, "SSH"},
    {23, "Telnet"},
    {25, "SMTP"},
    {53, "DNS"},
    {67, "DHCP Server"},
    {68, "DHCP Client"},
    {69, "TFTP"},
    {80, "HTTP"},
    {110, "POP3"},
    {123, "NTP"},
    {143, "IMAP"},
    {161, "SNMP"},
    {389, "LDAP"},
    {443, "HTTPS"},
    {445, "Microsoft SMB"},
    {465, "SMTPS"},
    {587, "SMTP Submission"},
    {636, "LDAPS"},
    {993, "IMAPS"},
    {995, "POP3S"},
    {1433, "Microsoft SQL Server"},
    {1521, "Oracle Database"},
    {2049, "NFS"},
    {2082, "cPanel"},
    {2083, "cPanel SSL"},
    {3306, "MySQL"},
    {3389, "Remote Desktop (RDP)"},
    {5432, "PostgreSQL"},
    {5900, "VNC"},
    {6379, "Redis"},
    {8080, "HTTP Alternate"},
    {8443, "HTTPS Alternate"},
    {9000, "SonarQube / PHP-FPM"},
    {9200, "Elasticsearch"},
    {27017, "MongoDB"}
};