import os

def create_readme_in_subdirs():
    # Get the current working directory
    current_dir = os.getcwd()
    
    # Iterate over each item in the current directory
    for item in os.listdir(current_dir):
        item_path = os.path.join(current_dir, item)
        
        # Check if the item is a directory
        if os.path.isdir(item_path):
            readme_path = os.path.join(item_path, "README.md")
            
            # Check if README.md already exists
            if not os.path.exists(readme_path):
                # Create an empty README.md file
                with open(readme_path, "w") as readme_file:
                    pass  # Leave the file empty
                print(f"Created: {readme_path}")
            else:
                print(f"Skipped (already exists): {readme_path}")

if __name__ == "__main__":
    create_readme_in_subdirs()

