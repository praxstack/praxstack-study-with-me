# Study with Prax

A public study log. Every finished lesson is a static page: a board you can step through, a voice that reads each step, predict-first questions, and a narrated film.

Live site: https://prax-lannister-study-with-me.vercel.app

## Layout

```
index.html                 home page, one card per lesson
lessons/<slug>/index.html  the lesson (self-contained HTML)
lessons/<slug>/voice/      one MP3 per step
lessons/<slug>/films/      narrated MP4 per look, poster JPG, captions (.vtt.txt)
lessons/<slug>/cover.jpg   card image
```

No build step: Vercel serves the folder as it is.

## Where lessons come from

Lessons are drafted in a private workspace with the teacher engine and video skills, and land here only when finished. A lesson can later be copied into the paid course product; code is never copied between repos, only lesson files.

## Adding a lesson

1. Put the lesson in `lessons/<slug>/` (keep each film under ~15 MB; three looks per lesson).
2. Add a card to `index.html`.
3. Open a PR; Vercel builds a preview for it.
