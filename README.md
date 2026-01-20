# 🚀 Reminisce 360: A Digital Guardian for Cognitive Support

## 💡 The Problem

The challenges faced by caregivers of elderly patients, especially those with Alzheimer's or Dementia, are significant. Existing solutions often fall short in providing affordable, automated, and empathetic monitoring. Key issues include:

-   **High Caregiver Burden:** Manual, constant supervision leads to exhaustion and reduced quality of life for caregivers.
-   **Risk of Wandering:** Patients, particularly those with cognitive impairments, are prone to wandering, leading to dangerous situations if not immediately addressed.
-   **Delayed Emergency Response:** Manual systems often result in delayed alerts during critical incidents.
-   **Emotional Distress:** Patients can experience heightened anxiety and confusion, which is difficult for caregivers to manage manually without understanding triggers.
-   **Memory Impairment:** Patients struggle with recognizing familiar faces, leading to further distress and social isolation.

## ✨ Our Solution: Reminisce 360

**Reminisce 360** is an innovative software package designed to empower caregivers and enhance the safety and well-being of elderly patients with cognitive impairments. By leveraging cutting-edge AI and automation, we provide a "Digital Guardian" that offers:

-   **Automated Patient Monitoring:** Significantly reduces the need for constant physical supervision, easing caregiver burden.
-   **Real-time Safety Alerts:** Instant notifications for critical events, ensuring rapid response.
-   **Cognitive Support:** Aids patients in "re-learning" relationships and providing a sense of familiarity through intelligent audio cues.
-   **Enhanced Safety Perimeters:** Proactive geofencing to prevent wandering and ensure patients remain in safe zones.
-   **User-Friendly Interface:** A camera-first GUI designed for simplicity, making it accessible for both patients and caregivers.

## 🌟 Key Features

### 1. Memory Anchor: Relational Recognition & Audio Cues
Utilizes **Google Vision API** for real-time facial recognition. When a familiar person is detected, **Google Text-to-Speech** provides an audio cue (e.g., "This is Rahul, your son"), helping patients recognize loved ones and reducing confusion.

### 2. Safe-Zone (Geofencing): Proactive Wander Prevention
Employs **Google Maps API** to establish virtual safety perimeters around a patient's home. If the patient wanders beyond a set distance (>500m), the system triggers an immediate alert to caregivers and provides visual warnings on the patient's device.

### 3. Panic Detection: Emotional State Monitoring & Alerting
Integrates **Google Vision API** for sentiment analysis, monitoring the patient's facial expressions. If signs of distress or panic are detected, caregivers are instantly notified, allowing for timely intervention.

### 4. Real-time Caregiver Alerts: Instant Updates via WhatsApp
Caregivers receive critical notifications, including geofence breaches, panic alerts, and real-time location links, directly through **WhatsApp**, ensuring they are always informed and can act swiftly.

## ⚙️ Technology Stack

-   **Backend Framework:** Django (Python)
-   **Core Language:** Python
-   **Cloud Platform:** Google Cloud Platform
-   **AI/ML Services:**
    -   Google Vision API (Facial Recognition, Sentiment Analysis)
    -   Google Maps API (Geofencing, Location Tracking)
    -   Google Text-to-Speech API (Audio Cues)
-   **Messaging:** WhatsApp Integration (via third-party API)
-   **Development Environment:** Visual Studio Code / PyCharm
-   **Deployment:** Google Cloud Console for API management, quotas, and billing.

## 🎬 Demo

Witness Reminisce 360 in action!
- [Watch our demo video here!](Reminisce_360__A_Digital_Guardian.mp4)

## 🏁 Getting Started (Local Setup)

To set up Reminisce 360 locally for development or demonstration:

1.  **Clone the Repository:**
    \`\`\`bash
    git clone [repository-url]
    cd Reminisce_360
    \`\`\`

2.  **Set Up Python Virtual Environment:**
    \`\`\`bash
    python -m venv venv
    .\venv\Scripts\activate  # On Windows
    source venv/bin/activate # On macOS/Linux
    \`\`\`

3.  **Install Dependencies:**
    Create a `requirements.txt` file in the project root with necessary packages (Django, djangorestframework, google-cloud-vision, google-cloud-texttospeech, etc.).
    \`\`\`bash
    pip install -r requirements.txt
    \`\`\`

4.  **Google Cloud Platform Configuration:**
    -   Follow the instructions in `ROADMAP.md` (Phase 2) to set up a GCP project, enable APIs (Vision, Maps, Text-to-Speech), and generate a service account key.
    -   Set environment variables for your GCP credentials (e.g., `GOOGLE_APPLICATION_CREDENTIALS`).

5.  **Database Migrations:**
    \`\`\`bash
    python manage.py migrate
    \`\`\`

6.  **Create Superuser (for Django Admin):**
    \`\`\`bash
    python manage.py createsuperuser
    \`\`\`

7.  **Run the Development Server:**
    \`\`\`bash
    python manage.py runserver
    \`\`\`
    Access the application at `http://127.0.0.1:8000/`. The Django Admin will be available at `http://127.0.0.1:8000/admin/`.

## 🚀 Future Enhancements

We envision expanding Reminisce 360 with the following features:

-   **Medical Reminders:** Integrate scheduling for medication, appointments, and daily routines.
-   **Wearable Integration:** Connect with smart wearables for vital sign monitoring (heart rate, sleep patterns) to provide a more holistic view of patient health.
-   **Multi-language Support:** Expand audio cues and interface to support multiple languages for diverse user bases.
-   **Personalized Memory Games:** Develop interactive games designed to stimulate cognitive function and reinforce memory.
-   **Activity Tracking & Anomaly Detection:** Monitor daily activity patterns to identify unusual behavior that might indicate a health issue.

## 🤝 Contributors

-   Vivek Kumar Pandey
-   Shivam Kumar
-   Manish Kumar Meena

