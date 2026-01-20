import re

# Simulating a fetched webpage
html_content = """
<html>
<head><title>My Portfolio</title></head>
<body>
    <h1>Welcome to my CS Journey</h1>
    <p>I love Python and C++.</p>
    <p>Python is great for automation.</p>
    <div class="projects">
        <h2>My Projects</h2>
        <ul>
            <li>Task Manager</li>
            <li>Web Scraper</li>
        </ul>
    </div>
</body>
</html>
"""

def scrape(keyword):
    print(f"Scraping for keyword: '{keyword}'...")
    
    # Simple regex to find content tags
    text_content = re.sub('<[^<]+?>', '', html_content)
    
    count = text_content.lower().count(keyword.lower())
    
    print(f"Found {count} occurrences of '{keyword}'.")

if __name__ == "__main__":
    keyword = input("Enter keyword to search in dummy HTML: ")
    scrape(keyword)
