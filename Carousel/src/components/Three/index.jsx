import React from 'react'
import Slider from "react-slick";
import "slick-carousel/slick/slick.css";
import "slick-carousel/slick/slick-theme.css";
// import { baseUrl } from "./config";

function Three()
{
    const settings = {
        dots: true,
        infinite: true,
        speed: 500,
        slidesToShow: 3,
        slidesToScroll: 3
      };
    const data = [
        {
            name: 'Alex',
            image: 'https://letsenhance.io/static/8f5e523ee6b2479e26ecc91b9c25261e/1015f/MainAfter.jpg',
            description: 'lorem ipsum dolor sit amet, consectetur adip lorem ipsum dolor sit amet, consectetur adip.'
        },
        {
            name: 'Alex',
            image: 'https://letsenhance.io/static/8f5e523ee6b2479e26ecc91b9c25261e/1015f/MainAfter.jpg',
            description: 'lorem ipsum dolor sit amet, consectetur adip lorem ipsum dolor sit amet, consectetur adip.'
        },
        {
            name: 'Alex',
            image: 'https://letsenhance.io/static/8f5e523ee6b2479e26ecc91b9c25261e/1015f/MainAfter.jpg',
            description: 'lorem ipsum dolor sit amet, consectetur adip lorem ipsum dolor sit amet, consectetur adip.'
        },
        {
            name: 'Alex',
            image: 'https://letsenhance.io/static/8f5e523ee6b2479e26ecc91b9c25261e/1015f/MainAfter.jpg',
            description: 'lorem ipsum dolor sit amet, consectetur adip lorem ipsum dolor sit amet, consectetur adip.'
        },
        {
            name: 'Alex',
            image: 'https://letsenhance.io/static/8f5e523ee6b2479e26ecc91b9c25261e/1015f/MainAfter.jpg',
            description: 'lorem ipsum dolor sit amet, consectetur adip lorem ipsum dolor sit amet, consectetur adip.'
        }
    ]
  return (
    <div className='m-auto mt-10 2 w-[1320px] rounded-xl '>
        <Slider {...settings}>
        {
            data.map((item, index) => {
                return (
                    
                    <div key={index} className='w-[380px] h-[420px] rounded-xl mx-auto border border-gray-300 m-5'>
                        <div className='bg-blue-400 flex items-center justify-center rounded-t-xl py-5'>
                            <img src={item.image} alt={item.name} className='w-[150px] h-[150px] rounded-full' />
                        </div>
                        <div className='flex items-center flex-col gap-4'>
                            <h2 className='text-center font-semibold mt-5 text-xl'>{item.name}</h2>
                            <p className='text-center'>{item.description}</p>
                            <button className='bg-blue-500 text-white px-5 py-2 rounded-md mt-5'>Learn More</button>
                        </div>
                    </div>
        
                )
            })
        }
        </Slider>

    </div>
  )
}

export default Three