// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "PropertyDefinitionUint.pypp.hpp"

namespace bp = boost::python;

struct PropertyDefinition_less__unsigned_int__greater__wrapper : CEGUI::PropertyDefinition< unsigned int >, bp::wrapper< CEGUI::PropertyDefinition< unsigned int > > {

    PropertyDefinition_less__unsigned_int__greater__wrapper(CEGUI::PropertyDefinition<unsigned int> const & arg )
    : CEGUI::PropertyDefinition<unsigned int>( arg )
      , bp::wrapper< CEGUI::PropertyDefinition< unsigned int > >(){
        // copy constructor
        
    }

    PropertyDefinition_less__unsigned_int__greater__wrapper(::CEGUI::String const & name, ::CEGUI::String const & initialValue, ::CEGUI::String const & help, ::CEGUI::String const & origin, bool redrawOnWrite, bool layoutOnWrite, ::CEGUI::String const & fireEvent, ::CEGUI::String const & eventNamespace )
    : CEGUI::PropertyDefinition<unsigned int>( boost::ref(name), boost::ref(initialValue), boost::ref(help), boost::ref(origin), redrawOnWrite, layoutOnWrite, boost::ref(fireEvent), boost::ref(eventNamespace) )
      , bp::wrapper< CEGUI::PropertyDefinition< unsigned int > >(){
        // constructor
    
    }

    virtual ::CEGUI::Property * clone(  ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->CEGUI::PropertyDefinition< unsigned int >::clone(  );
        }
    }
    
    ::CEGUI::Property * default_clone(  ) const  {
        return CEGUI::PropertyDefinition< unsigned int >::clone( );
    }

    virtual ::CEGUI::uint getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        if( bp::override func_getNative_impl = this->get_override( "getNative_impl" ) )
            return func_getNative_impl( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::PropertyDefinition< unsigned int >::getNative_impl( boost::python::ptr(receiver) );
        }
    }
    
    virtual ::CEGUI::uint default_getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        return CEGUI::PropertyDefinition< unsigned int >::getNative_impl( boost::python::ptr(receiver) );
    }

    virtual void initialisePropertyReceiver( ::CEGUI::PropertyReceiver * receiver ) const  {
        if( bp::override func_initialisePropertyReceiver = this->get_override( "initialisePropertyReceiver" ) )
            func_initialisePropertyReceiver( boost::python::ptr(receiver) );
        else{
            this->CEGUI::PropertyDefinition< unsigned int >::initialisePropertyReceiver( boost::python::ptr(receiver) );
        }
    }
    
    void default_initialisePropertyReceiver( ::CEGUI::PropertyReceiver * receiver ) const  {
        CEGUI::PropertyDefinition< unsigned int >::initialisePropertyReceiver( boost::python::ptr(receiver) );
    }

    virtual void setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::uint const value ){
        if( bp::override func_setNative_impl = this->get_override( "setNative_impl" ) )
            func_setNative_impl( boost::python::ptr(receiver), value );
        else{
            this->CEGUI::PropertyDefinition< unsigned int >::setNative_impl( boost::python::ptr(receiver), value );
        }
    }
    
    virtual void default_setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::uint const value ){
        CEGUI::PropertyDefinition< unsigned int >::setNative_impl( boost::python::ptr(receiver), value );
    }

    void setWindowUserString( ::CEGUI::Window * window, ::CEGUI::String const & value ) const {
        CEGUI::PropertyDefinition< unsigned int >::setWindowUserString( boost::python::ptr(window), boost::ref(value) );
    }

    void writeDefinitionXMLAdditionalAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinition< unsigned int >::writeDefinitionXMLAdditionalAttributes( boost::ref(xml_stream) );
    }

    virtual void writeDefinitionXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeDefinitionXMLElementType = this->get_override( "writeDefinitionXMLElementType" ) )
            func_writeDefinitionXMLElementType( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinition< unsigned int >::writeDefinitionXMLElementType( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeDefinitionXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinition< unsigned int >::writeDefinitionXMLElementType( boost::ref(xml_stream) );
    }

    virtual bool doesWriteXML(  ) const  {
        if( bp::override func_doesWriteXML = this->get_override( "doesWriteXML" ) )
            return func_doesWriteXML(  );
        else{
            return this->CEGUI::Property::doesWriteXML(  );
        }
    }
    
    bool default_doesWriteXML(  ) const  {
        return CEGUI::Property::doesWriteXML( );
    }

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< unsigned int >::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< unsigned int >::get( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::uint getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getNative = this->get_override( "getNative" ) )
            return func_getNative( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< unsigned int >::getNative( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::uint default_getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< unsigned int >::getNative( boost::python::ptr(receiver) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< unsigned int >::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::TypedProperty< unsigned int >::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::uint const value ) {
        if( bp::override func_setNative = this->get_override( "setNative" ) )
            func_setNative( boost::python::ptr(receiver), value );
        else{
            this->CEGUI::TypedProperty< unsigned int >::setNative( boost::python::ptr(receiver), value );
        }
    }
    
    void default_setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::uint const value ) {
        CEGUI::TypedProperty< unsigned int >::setNative( boost::python::ptr(receiver), value );
    }

    virtual void writeDefinitionXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeDefinitionXMLAttributes = this->get_override( "writeDefinitionXMLAttributes" ) )
            func_writeDefinitionXMLAttributes( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeDefinitionXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes( boost::ref(xml_stream) );
    }

    virtual void writeDefinitionXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeDefinitionXMLToStream = this->get_override( "writeDefinitionXMLToStream" ) )
            func_writeDefinitionXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeDefinitionXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream( boost::ref(xml_stream) );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_PropertyDefinitionUint_class(){

    { //::CEGUI::PropertyDefinition< unsigned int >
        typedef bp::class_< PropertyDefinition_less__unsigned_int__greater__wrapper, bp::bases< CEGUI::FalagardPropertyBase< unsigned int > > > PropertyDefinitionUint_exposer_t;
        PropertyDefinitionUint_exposer_t PropertyDefinitionUint_exposer = PropertyDefinitionUint_exposer_t( "PropertyDefinitionUint", bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, bool, bool, CEGUI::String const &, CEGUI::String const & >(( bp::arg("name"), bp::arg("initialValue"), bp::arg("help"), bp::arg("origin"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite"), bp::arg("fireEvent"), bp::arg("eventNamespace") )) );
        bp::scope PropertyDefinitionUint_scope( PropertyDefinitionUint_exposer );
        { //::CEGUI::PropertyDefinition< unsigned int >::clone
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef ::CEGUI::Property * ( exported_class_t::*clone_function_type )(  ) const;
            typedef ::CEGUI::Property * ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_clone_function_type )(  ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "clone"
                , clone_function_type(&::CEGUI::PropertyDefinition< unsigned int >::clone)
                , default_clone_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_clone)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::PropertyDefinition< unsigned int >::getNative_impl
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef ::CEGUI::uint ( PropertyDefinition_less__unsigned_int__greater__wrapper::*getNative_impl_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "getNative_impl"
                , getNative_impl_function_type( &PropertyDefinition_less__unsigned_int__greater__wrapper::default_getNative_impl )
                , ( bp::arg("receiver") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyDefinition< unsigned int >::initialisePropertyReceiver
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "initialisePropertyReceiver"
                , initialisePropertyReceiver_function_type(&::CEGUI::PropertyDefinition< unsigned int >::initialisePropertyReceiver)
                , default_initialisePropertyReceiver_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_initialisePropertyReceiver)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::PropertyDefinition< unsigned int >::setNative_impl
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*setNative_impl_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::uint const ) ;
            
            PropertyDefinitionUint_exposer.def( 
                "setNative_impl"
                , setNative_impl_function_type( &PropertyDefinition_less__unsigned_int__greater__wrapper::default_setNative_impl )
                , ( bp::arg("receiver"), bp::arg("value") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyDefinition< unsigned int >::setWindowUserString
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*setWindowUserString_function_type )( ::CEGUI::Window *,::CEGUI::String const & ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "setWindowUserString"
                , setWindowUserString_function_type( &PropertyDefinition_less__unsigned_int__greater__wrapper::setWindowUserString )
                , ( bp::arg("window"), bp::arg("value") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyDefinition< unsigned int >::writeDefinitionXMLAdditionalAttributes
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*writeDefinitionXMLAdditionalAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "writeDefinitionXMLAdditionalAttributes"
                , writeDefinitionXMLAdditionalAttributes_function_type( &PropertyDefinition_less__unsigned_int__greater__wrapper::writeDefinitionXMLAdditionalAttributes )
                , ( bp::arg("xml_stream") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::PropertyDefinition< unsigned int >::writeDefinitionXMLElementType
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*writeDefinitionXMLElementType_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "writeDefinitionXMLElementType"
                , writeDefinitionXMLElementType_function_type( &PropertyDefinition_less__unsigned_int__greater__wrapper::default_writeDefinitionXMLElementType )
                , ( bp::arg("xml_stream") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::Property::doesWriteXML
        
            typedef bool ( ::CEGUI::Property::*doesWriteXML_function_type )(  ) const;
            typedef bool ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_doesWriteXML_function_type )(  ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "doesWriteXML"
                , doesWriteXML_function_type(&::CEGUI::Property::doesWriteXML)
                , default_doesWriteXML_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_doesWriteXML) );
        
        }
        { //::CEGUI::TypedProperty< unsigned int >::get
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::TypedProperty< unsigned int >::get)
                , default_get_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< unsigned int >::getNative
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef ::CEGUI::uint ( exported_class_t::*getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::uint ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "getNative"
                , getNative_function_type(&::CEGUI::TypedProperty< unsigned int >::getNative)
                , default_getNative_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_getNative)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_isReadable_function_type )(  ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_isWritable_function_type )(  ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_isWritable) );
        
        }
        { //::CEGUI::TypedProperty< unsigned int >::set
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            PropertyDefinitionUint_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::TypedProperty< unsigned int >::set)
                , default_set_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< unsigned int >::setNative
        
            typedef CEGUI::PropertyDefinition< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::uint const ) ;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::uint const ) ;
            
            PropertyDefinitionUint_exposer.def( 
                "setNative"
                , setNative_function_type(&::CEGUI::TypedProperty< unsigned int >::setNative)
                , default_setNative_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_setNative)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes
        
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*writeDefinitionXMLAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "writeDefinitionXMLAttributes"
                , writeDefinitionXMLAttributes_function_type( &PropertyDefinition_less__unsigned_int__greater__wrapper::default_writeDefinitionXMLAttributes )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                \n\
                    Write out any xml attributes added in a sub-class.  Note that you\n\
                    should not write the closing '>' character sequence, nor any other\n\
                    information in this function.  You should always call the base class\n\
                    implementation of this function when overriding.\n\
            \n\
                @param xml_stream\n\
                    XMLSerializer where xml data should be output.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream
        
            typedef void ( ::CEGUI::PropertyDefinitionBase::*writeDefinitionXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_writeDefinitionXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "writeDefinitionXMLToStream"
                , writeDefinitionXMLToStream_function_type(&::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream)
                , default_writeDefinitionXMLToStream_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_writeDefinitionXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::Property::writeXMLToStream
        
            typedef void ( ::CEGUI::Property::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyDefinition_less__unsigned_int__greater__wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinitionUint_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Property::writeXMLToStream)
                , default_writeXMLToStream_function_type(&PropertyDefinition_less__unsigned_int__greater__wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}