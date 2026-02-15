# Contributing to LeetCode Daily Challenge Repository

Thank you for your interest in contributing! This guide will help you add your LeetCode daily challenge solutions to this repository.

## 📋 Guidelines

### 1. Solution Format
- Use the provided [template.md](template.md) as a starting point
- Include clear problem descriptions and examples
- Provide detailed explanations of your approach
- Add code solutions in multiple languages when possible
- Include complexity analysis

### 2. File Naming Convention
- Use lowercase with hyphens: `problem-name.md`
- Example: `two-sum.md`, `longest-substring.md`
- Include the problem number if you prefer: `1-two-sum.md`

### 3. Directory Structure
Place your solution in the appropriate year/month folder:
```
solutions/
└── YYYY/
    └── Month/
        └── problem-name.md
```

Example:
```
solutions/
└── 2026/
    └── February/
        └── 15-two-sum.md
```

## 🚀 How to Contribute

### Step 1: Fork the Repository
Click the "Fork" button at the top right of this repository.

### Step 2: Clone Your Fork
```bash
git clone https://github.com/YOUR-USERNAME/LCD.git
cd LCD
```

### Step 3: Create a New Branch
```bash
git checkout -b add-solution-problem-name
```

### Step 4: Add Your Solution
1. Create the appropriate directory if it doesn't exist:
   ```bash
   mkdir -p solutions/2026/February
   ```

2. Copy the template:
   ```bash
   cp template.md solutions/2026/February/your-problem.md
   ```

3. Fill in the template with your solution and explanation

### Step 5: Commit Your Changes
```bash
git add .
git commit -m "Add solution for [Problem Name]"
```

### Step 6: Push to Your Fork
```bash
git push origin add-solution-problem-name
```

### Step 7: Create a Pull Request
1. Go to your fork on GitHub
2. Click "New Pull Request"
3. Provide a clear title and description
4. Submit the pull request

## ✅ Quality Checklist

Before submitting, ensure your solution includes:

- [ ] Clear problem description
- [ ] At least one code solution
- [ ] Detailed approach explanation
- [ ] Time and space complexity analysis
- [ ] Example walkthrough
- [ ] Well-formatted and readable code
- [ ] Proper use of the template structure

## 💡 Tips for Great Contributions

1. **Clarity**: Write explanations that beginners can understand
2. **Completeness**: Include all sections from the template
3. **Examples**: Use concrete examples to illustrate your approach
4. **Code Quality**: Write clean, well-commented code
5. **Multiple Solutions**: Consider including alternative approaches
6. **Testing**: Verify your solution works on LeetCode

## 🎨 Code Style

### Python
- Follow PEP 8 guidelines
- Use descriptive variable names
- Add type hints when appropriate

### Java
- Follow Java naming conventions
- Use camelCase for variables and methods
- Use PascalCase for classes

### C++
- Follow standard C++ conventions
- Use meaningful variable names
- Include necessary headers

### JavaScript
- Use const/let instead of var
- Follow modern ES6+ syntax
- Use camelCase for variables and functions

## 🤝 Code of Conduct

- Be respectful and constructive in discussions
- Help others learn and improve
- Focus on educational value
- Give credit when using others' ideas

## 📞 Questions?

If you have questions or need help:
1. Check existing solutions for examples
2. Review the template.md file
3. Open an issue for discussion

## 🙏 Thank You!

Every contribution helps make this repository a better learning resource for the community. Happy coding!
