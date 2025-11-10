import random

fortunes = [
    "Great things are coming your way — stay ready!",
    "You're not just dreaming, you're building something legendary!",
    "One bold move can change everything — make it today!",
    "The world is waiting to see your brilliance — don't hold back!",
    "Success is closer than you think — one more push!",
    "Your energy can move mountains — keep charging forward!",
    "You've got the power to turn challenges into victories!",
    "A breakthrough is coming — stay consistent and positive!",
    "Keep going — your future self is already proud of you!",
    "Every great story begins with someone who refused to quit.",
    "Your impact will reach farther than you can imagine.",
    "Focus + Determination = Unstoppable You.",
    "A new opportunity is rising — catch it before it passes!",
    "You were born to create, not just to exist.",
    "Every setback is just a setup for an epic comeback!",
    "Keep improving — mastery is built one step at a time.",
    "You're in the process of becoming someone extraordinary.",
    "Don't stop now — the finish line is just ahead!",
    "Your ideas have the power to inspire millions — start now!",
    "Greatness grows quietly — keep watering your dreams."
]


name = input("Enter your name: ").title()

while True:
    random_fortune = random.choice(fortunes)

    print("\n🔮✨ Your Fortune ✨🔮")
    print("-" * 40)
    print(f"Hey {name.title()}, your fortune for today says:\n")
    print(f"💬 {random_fortune}")
    print("-" * 40)


    choice = input("\nPress Enter for another fortune or type 'exit' to quit: ").lower()
    if choice == "exit":
        print("\n🌟 Goodbye, and may luck be on your side!")
        break


