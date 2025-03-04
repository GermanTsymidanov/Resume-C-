#include <iostream>
using namespace std;

int main()
{
    const string red = "\033[31m";
    const string green = "\033[32m";
    const string blue = "\033[34m";
    const string pink = "\033[35m";
    const string yellow = "\033[33m";
    const string cyan = "\033[36m";
    const string white = "\033[37m";

    cout << red << "RESUME\n";
    cout << yellow << "Name: " << green << "German Tsymidanov\n";
    cout << cyan << "Contact Information: \n";
    cout << yellow << "Email: " << green << "german.tsymidanov@email.com\n";
    cout << yellow << "Phone: " << green << "+380 ### ## ##\n";
    cout << yellow << "City: " << green << "Mariupol, Ukraine\n";

    cout << blue << "EDUCATION:\n";
    cout << cyan << "RMIT University\n";
    cout << cyan << "Degree: " << green << "Bachelor of Cybersecurity (2026 - 2030)\n";
    cout << white << "Relevant Courses: " << yellow << "Network Security, Ethical Hacking, Cryptography, Data Protection, Incident Response\n";

    cout << red << "WORK EXPERIENCE:\n";
    cout << white << "Company: " << green << "ITSTEP\n";
    cout << white << "Period: " << green << "2024 - Present\n";
    cout << white << "Position: " << green << "Software Developer\n";
    cout << cyan << "Responsibilities: Developing software solutions for cybersecurity applications, collaborating with team members, improving system security protocols, and troubleshooting code.\n";
    cout << cyan << "Technologies Used: C++, Python, Docker, Linux, Git\n";

    cout << pink << "INTERNSHIPS:\n";
    cout << white << "Company: " << green << "CyberSafe Solutions\n";
    cout << white << "Period: " << green << "Summer 2023\n";
    cout << white << "Position: " << green << "Cybersecurity Intern\n";
    cout << cyan << "Responsibilities: Assisting with vulnerability assessments, conducting penetration testing, writing security reports, and maintaining firewall systems.\n";

    cout << blue << "SKILLS:\n";
    cout << yellow << "Programming Languages: " << green << "C++, Python, JavaScript, HTML\n";
    cout << yellow << "Cybersecurity Skills: " << green << "Ethical Hacking, Penetration Testing, Network Security, Cryptography\n";
    cout << yellow << "Tools: " << green << "Git, Docker, Kali Linux, Nmap, Wireshark, Burp Suite\n";
    cout << yellow << "Other Skills: " << green << "Multithreaded Application Development, Continuous Integration, DevOps Practices\n";

    cout << cyan << "PROJECTS:\n";
    cout << white << "1. Cybersecurity Risk Assessment Tool\n";
    cout << white << "Description: Developed a tool to assess the security posture of web applications using OWASP Top 10 vulnerabilities.\n";
    cout << white << "Technologies Used: Python, Flask, SQL, Docker\n";

    cout << white << "2. Secure File Encryption System\n";
    cout << white << "Description: Designed and implemented a secure file encryption system to protect sensitive user data using AES-256 encryption.\n";
    cout << white << "Technologies Used: C++, OpenSSL, Linux\n";

    cout << blue << "LANGUAGES:\n";
    cout << pink << "Russian - Native\n";
    cout << pink << "English - B2 (Advanced)\n";
    cout << pink << "Ukrainian - Native\n";
    cout << pink << "German - A1 (Beginner)\n";

    cout << green << "HOBBIES & INTERESTS:\n";
    cout << cyan << "Cybersecurity Conferences, Open Source Contributions, Ethical Hacking, Chess, Traveling\n";

    cout << red << "REFERENCES:\n";
    cout << yellow << "Available upon request.\n";

    return 0;
}
