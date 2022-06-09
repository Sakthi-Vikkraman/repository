from http import client
import discord
client = discord.Client()

@client.event
async def on_connect():
    for user in client.server.friends:
        try:
            await user.send('Naan pathuvayasu papali papa')
            print(f"working with: {user.name}")
        except:
            print(f"Not working on :{user.name}")

client.run("706819025618862159" ,bot=False)