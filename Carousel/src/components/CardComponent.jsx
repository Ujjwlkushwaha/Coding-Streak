import PropTypes from "prop-types";

const CardComponent = ({ imageSrc, title, description, tags }) => {
  return (
    <div className="max-w-[400px] m-10 mx-auto">
      <div className="relative bg-white rounded-lg overflow-hidden shadow-lg">
        <div className="relative h-72 rounded-3xl overflow-hidden">
          <img
            src={imageSrc}
            alt="Trust & Co."
            className="w-full h-full object-cover"
          />

          {/* curve section*/}
          <div className="absolute bottom-0 right-0 w-36 h-32 overflow-hidden flex items-end">
            <svg width="30" height="30">
              <path d="M30,0 L30,30 L0,30 A30,30 0 0,0 30,0 Z" fill="white" />
            </svg>
            <div className="w-full h-full flex flex-col items-end">
              <svg width="30" height="30">
                <path d="M30,0 L30,30 L0,30 A30,30 0 0,0 30,0 Z" fill="white" />
              </svg>
              <div className="bg-white w-full h-[80%] rounded-tl-[50px]">
                <div className="circle w-20 h-20 bg-yellow-500 rounded-full mx-4 my-2 flex items-center justify-center">
                <a href="#" className="iconBox text-white"> <span className="material-symbols-outlined">
                arrow_outward
              </span></a>
                </div>
              </div>
            </div>
          </div>
        </div>

        <div className="p-4">
          {/* Title and Description */}
          <h3 className="text-xl font-semibold mb-2">{title}</h3>
          <p className="text-gray-600 mb-4">{description}</p>

          {/* Tags */}
          <ul className="flex space-x-2">
            {tags.map((tag, index) => (
              <li
                key={index}
                className={` text-gray-800 font-bold text-sm py-1 px-2 rounded`}
                style={{ backgroundColor: tag.color }}
              >
                {tag.name}
              </li>
            ))}
          </ul>
        </div>
      </div>
    </div>
  );
};
CardComponent.propTypes = {
  imageSrc: PropTypes.string.isRequired,
  title: PropTypes.string,
  description: PropTypes.string,
  tags: PropTypes.arrayOf(
    PropTypes.shape({
      name: PropTypes.string.isRequired,
      color: PropTypes.string.isRequired,
    })
  ).isRequired,
};

export default CardComponent;
