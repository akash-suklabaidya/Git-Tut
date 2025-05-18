#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define pll pair<ll, ll>
#define vll vector<ll>
using namespace std;
void decor()
{
    cout << endl;
    cout << "********************" << endl;
}
class Test
{
public:
    ll time;
    string ta;
    string room;
    bool valid = false;
    Test()
    {
    }
    Test(ll time, string ta, string room)
    {
        this->time = time;
        this->ta = ta;
        this->room = room;
    }
};
class Subjects
{
public:
    string subName;
    string subCode;
    string PIC;
    Test t;

    Subjects(string subName, string subCode, string PIC)
    {
        this->subName = subName;
        this->subCode = subCode;
        this->PIC = PIC;
    }
    void showSubject()
    {
        cout << "Subject Name : " << subName << endl;
        cout << "Subject Code : " << subCode << endl;
        cout << "Professor In Charge : " << PIC << endl;
    }
    void addTest()
    {
        ll time;
        string ta;
        string room;
        decor();
        cout << "Enter Time : " << endl;
        cin >> time;
        cout << "Enter Teaching Assistant : " << endl;
        cin >> ta;
        cout << "Enter Room : " << endl;
        cin >> room;
        t = Test(time, ta, room);
        t.valid = true;
        decor();
    }
    void showTestInfo()
    {
        if (!t.valid)
        {
            cout << "TEST is not generated" << endl;
        }
        else
        {
            decor();
            cout << "Time : " << t.time << endl;
            cout << "Teaching Assistant : " << t.ta << endl;
            cout << "Room : " << t.room << endl;
            decor();
        }
    }
};
class Student
{
public:
    ll sid;
    string name;
    string course;
    string batch;
    string branch;
    ll sem;
    ll cgpa;
    ll eli;
    vector<pair<ll, ll>> subjects;
    Student(ll sid,
            string name,
            string course,
            string batch,
            string branch,
            ll sem,
            ll cgpa,
            ll eli)
    {
        this->sid = sid;
        this->name = name;
        this->course = course;
        this->batch = batch;
        this->branch = branch;
        this->sem = sem;
        this->cgpa = cgpa;
        this->eli = eli;
    }
    void intro()
    {
        cout << "Name : " << name;
        cout << endl;
        cout << "Scholar ID : " << sid;
        cout << endl;
        cout << "Course : " << course;
        cout << endl;
        cout << "Batch : " << batch;
        cout << endl;
        cout << "Branch : " << branch;
        cout << endl;
        cout << "Semester : " << sem;
        cout << endl;
        cout << "CGPA : " << cgpa;
        cout << endl;
        cout << "Eligible : " << eli;
        cout << endl;
    }
};
vector<Subjects> sub;
vector<Student> stud;
void enterDetails()
{

    ll sid;
    string name;
    string course;
    string batch;
    string branch;
    ll sem;
    ll cgpa;
    ll eli;
    decor();
    cout << "Enter Scholar ID : " << endl;
    cin >> sid;
    cout << "Enter Name : " << endl;
    cin >> name;
    cout << "Enter Course : " << endl;
    cin >> course;
    cout << "Enter Batch : " << endl;
    cin >> batch;
    cout << "Enter Branch : " << endl;
    cin >> branch;
    cout << "Enter Semester : " << endl;
    cin >> sem;
    cout << "Enter CGPA : " << endl;
    cin >> cgpa;
    cout << "Enter Eligible : " << endl;
    cin >> eli;
    Student s(sid, name, course, batch, branch, sem, cgpa, eli);
    stud.push_back(s);
    decor();
}
void promote()
{
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;
    decor();
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            stud[i].sem++;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
}
void demote()
{
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;
    decor();
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            stud[i].sem--;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
}
void modify()
{
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;
    decor();
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;

            ll sid;
            string name;
            string course;
            string batch;
            string branch;
            ll sem;
            ll cgpa;
            ll eli;
            decor();
            cout << "Enter Scholar ID : " << endl;
            cin >> sid;
            cout << "Enter Name : " << endl;
            cin >> name;
            cout << "Enter Course : " << endl;
            cin >> course;
            cout << "Enter Batch : " << endl;
            cin >> batch;
            cout << "Enter Branch : " << endl;
            cin >> branch;
            cout << "Enter Semester : " << endl;
            cin >> sem;
            cout << "Enter CGPA : " << endl;
            cin >> cgpa;
            cout << "Enter Eligible : " << endl;
            cin >> eli;
            Student s(sid, name, course, batch, branch, sem, cgpa, eli);

            stud[i] = s;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
}
void eraseIt()
{
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;
    decor();
    bool milah = false;
    vector<Student> temp;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            continue;
        }
        temp.push_back(stud[i]);
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
    stud = temp;
    decor();
}
void viewIt()
{
    decor();
    if (stud.size() == 0)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    cout << "THE STUDENT RECORDS : " << endl;
    decor();
    for (auto it : stud)
    {
        it.intro();
        decor();
        cout << endl;
    }
}
void displayRecordOfStudent()
{
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;
    decor();
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            stud[i].intro();
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
}
void getNoStud()
{
    decor();
    cout << "The number of students are : ";
    cout << stud.size();
    cout << endl;
}
void createSubject()
{
    string subName;
    string subCode;
    string PIC;
    decor();
    cout << "Enter Subject Name : " << endl;
    cin >> subName;
    cout << "Enter Subject Code : " << endl;
    cin >> subCode;
    cout << "Enter PIC : " << endl;
    cin >> PIC;
    Subjects s(subName, subCode, PIC);
    sub.push_back(s);
    decor();
}
void showAllSub()
{
    decor();
    if (sub.size() == 0)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    cout << "SUBJECT RECORDS : " << endl;
    for (auto it : sub)
    {
        it.showSubject();
        decor();
        cout << endl;
    }
}
void testAddSub()
{
    string x;
    cout << "Enter Subject Code : ";
    cin >> x;
    bool milah = false;
    for (int i = 0; i < sub.size(); i++)
    {
        if (sub[i].subCode == x)
        {
            milah = true;
            sub[i].addTest();
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
}
void showTestInfo()
{
    string x;
    cout << "Enter Subject Code : ";
    cin >> x;
    decor();
    bool milah = false;
    for (int i = 0; i < sub.size(); i++)
    {
        if (sub[i].subCode == x)
        {
            milah = true;
            sub[i].showTestInfo();
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
    }
}
void showProf()
{
    decor();
    if (sub.size() == 0)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    cout << "PROFESSOR RECORDS and their COURSES: " << endl;
    decor();
    ll ind = 0;
    for (auto it : sub)
    {
        cout << ind + 1 << ". ";
        cout << it.PIC << " : " << it.subName << endl;
        ind++;
    }
}
void showEli()
{
    decor();
    if (stud.size() == 0)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    cout << "ELIGIBLE STUDENTS: " << endl;
    decor();
    ll ind = 0;
    for (auto it : stud)
    {
        if (!it.eli)
            continue;
        cout << ind + 1 << ". ";
        cout << it.name << " " << it.sid << endl;
        ind++;
    }
}
void taList()
{
    decor();
    ll cnt = 0;
    for (auto it : sub)
    {
        if (it.t.valid)
            cnt++;
    }
    if (cnt == 0)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    cout << "Teaching Assistant List: " << endl;
    decor();
    ll ind = 0;
    for (auto it : sub)
    {
        if (!it.t.valid)
            continue;
        cout << ind + 1 << ". ";
        cout << it.t.ta << " " << it.t.room << endl;
        ind++;
    }
}
void testRoom()
{
    decor();
    ll cnt = 0;
    for (auto it : sub)
    {
        if (it.t.valid)
            cnt++;
    }
    if (cnt == 0)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    cout << "Rooms and Subjects: " << endl;
    decor();
    ll ind = 0;
    for (auto it : sub)
    {
        if (!it.t.valid)
            continue;
        cout << ind + 1 << ". ";
        cout << it.t.room << " " << it.subName << endl;
        ind++;
    }
}
void enroll()
{
    cout << endl;
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;

    ll studind = -1, subind = -1;
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            studind = i;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
        decor();
        return;
    }
    if (stud[studind].eli == 0)
    {
        cout << "This student is not eligible to enroll into any course";
        cout << endl;
        return;
    }
    milah = false;
    string y;
    cout << "Enter Subject Code : ";
    cin >> y;
    for (int i = 0; i < sub.size(); i++)
    {
        if (sub[i].subCode == y)
        {
            if (sub[i].t.valid == 0)
            {
                cout << "Test for this subject has not been created" << endl;
                return;
            }
            milah = true;
            subind = i;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
        decor();
        return;
    }
    cout << "Enrollment done : ";
    stud[studind].subjects.push_back({subind, 0});
    cout << stud[studind].name << " -> " << sub[subind].subName << endl;
}
void studSub()
{
    cout << endl;
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;

    ll studind = -1;
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            studind = i;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
        decor();
        return;
    }
    ll i = 0;
    if (stud[studind].subjects.size() == 0)
    {
        cout << "No subjects enrolled" << endl;
        return;
    }
    for (auto it : stud[studind].subjects)
    {
        cout << i + 1 << " " << sub[it.first].subName << endl;
    }
}
void studMarks()
{
    cout << endl;
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;

    ll studind = -1;
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            studind = i;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
        decor();
        return;
    }
    if (stud[studind].subjects.size() == 0)
    {
        cout << "No subjects enrolled" << endl;
        return;
    }
    ll i = 0;
    for (auto it : stud[studind].subjects)
    {
        cout << i + 1 << ". " << sub[it.first].subName << " " << it.second << endl;
    }
}
void testHim()
{
    cout << endl;
    ll x;
    cout << "Enter Student ID : ";
    cin >> x;

    ll studind = -1;
    bool milah = false;
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i].sid == x)
        {
            milah = true;
            studind = i;
            break;
        }
    }
    if (!milah)
    {
        cout << "Not Present in Database" << endl;
        decor();
        return;
    }
    if (stud[studind].eli == 0)
    {
        cout << "This student is not eligible to give any test";
        cout << endl;
        return;
    }
    cout << "Enter Marks for :" << endl;
    if (stud[studind].subjects.size() == 0)
    {
        cout << "This student has not enrolled into any subject";
        cout << endl;
        return;
    }
    for (int i = 0; i < stud[studind].subjects.size(); i++)
    {
        ll x;
        cout << i + 1 << ". " << sub[stud[studind].subjects[i].first].subName << " ";
        cin >> x;
        stud[studind].subjects[i].second = x;
    }
}
void menu()
{
    decor();
    cout << "1.  Enter Students Details" << endl;
    cout << "2.  Promote Student" << endl;
    cout << "3.  Demote Student" << endl;
    cout << "4.  Modify Students Details" << endl;
    cout << "5.  Erase Student Record" << endl;
    cout << "6.  View Students Record" << endl;
    cout << "7.  Search Student" << endl;
    cout << "8.  Get Number of Students" << endl;
    cout << "9.  Create Subject" << endl;
    cout << "10. Test the Student" << endl;
    cout << "11. Add test to the Subject" << endl;
    cout << "12. Show test info" << endl;
    cout << "13. Show all Subjects" << endl;
    cout << "14. Enroll Student into a Subject" << endl;
    cout << "15. Generate Proffesor List" << endl;
    cout << "16. Show Eligibile Students" << endl;
    cout << "17. Show Student Subjects" << endl;
    cout << "18. Show Student Marks" << endl;
    cout << "19. Show Examination room of Subjects" << endl;
    cout << "20. Generate Teaching Assistant List" << endl;
}
void choose()
{
    ll choice;
    cout << "Your Choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        enterDetails();
        break;
    case 2:
        promote();
        break;
    case 3:
        demote();
        break;
    case 4:
        modify();
        break;
    case 5:
        eraseIt();
        break;
    case 6:
        viewIt();
        break;
    case 7:
        displayRecordOfStudent();
        break;
    case 8:
        getNoStud();
        break;
    case 9:
        createSubject();
        break;
    case 10:
        testHim();
        break;
    case 11:
        testAddSub();
        break;
    case 12:
        showTestInfo();
        break;
    case 13:
        showAllSub();
        break;
    case 14:
        enroll();
        break;
    case 15:
        showProf();
        break;
    case 16:
        showEli();
        break;
    case 17:
        studSub();
        break;
    case 18:
        studMarks();
        break;
    case 19:
        testRoom();
        break;
    case 20:
        taList();
        break;
    default:
        cout << "Incorrect Option " << endl;
        break;
    }
}
void solve()
{
    decor();
    cout << "WELCOME TO EXAM MANAGEMENT SYSTEM";
    while (1)
    {
        menu();
        choose();
        cout << "Press 0 to exit, 1 to continue"
             << " ";
        ll x;
        cin >> x;
        if (x == 0)
        {
            cout << "Bye!";
            return;
        }
    }
}
int32_t main()
{
    solve();
    return 0;
}