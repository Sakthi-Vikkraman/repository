import discord
from discord.ext import commands

client=commands.Bot( command_prefix=" / ")

@client.event
async def on_ready():
    print("Bot is ready")

@client.event
async def hello():
    await ctx.send("Hi")

client.run(" Token ")
