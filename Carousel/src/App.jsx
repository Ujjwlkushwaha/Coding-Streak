// import React from 'react'
// import One from './components/One'
// import Two from './components/Two/Contitue'
// import Three from './components/Three'
import CardComponent from "./components/CardComponent";
function App() {

  const cards = [
    {
      imageSrc: 'https://images.unsplash.com/photo-1601049676869-702ea24cfd58?q=80&w=2073&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D',
      altText: 'Trust & Co.',
      title: 'trust & co.',
      description: 'Fill out the form and the algorithm will offer the right team of experts',
      tags: [
        { name: 'branding', color: '#d3b19a' },
        { name: 'marketing', color: '#70b3b1' },
      ],
    },
    {
      imageSrc: 'https://images.unsplash.com/photo-1613235788366-270e7ac489f3?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D',
      altText: 'tonic.',
      title: 'tonic.',
      description: 'Fill out the form and the algorithm will offer the right team of experts',
      tags: [
        { name: 'branding', color: '#d3b19a' },
        { name: 'marketing', color: '#70b3b1' },
      ],
    },
    {
      imageSrc: 'https://images.unsplash.com/photo-1673847401561-fcd75a7888c5?q=80&w=2070&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D',
      altText: 'shower gel',
      title: 'tonic.',
      description: 'Fill out the form and the algorithm will offer the right team of experts',
      tags: [
        { name: 'branding', color: '#d3b19a' },
        { name: 'marketing', color: '#70b3b1' },
        { name: 'packaging', color: '#d05fa2' },
      ],
    }
  ]
    

    // Add more card objects as needed
// console.log(cards)

  return (
    <div className="p-10 lg:flex w-full min-h-screen bg-red-400">
      {
        cards.map((card, index) => {
          return <CardComponent key={index} {...card} />
        })  // map over the cards array and render a CardComponent for each card object
      }
    </div>
  );
} 

export default App