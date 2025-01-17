﻿#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// Este código fuente fue generado automáticamente por xsd, Versión=4.6.1055.0.
// 
namespace spaceShip1414 {
    using namespace System;
    ref class NewDataSet;
    
    
    /// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
    [System::Serializable, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::ComponentModel::ToolboxItem(true), 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
    System::Xml::Serialization::XmlRootAttribute(L"NewDataSet"), 
    System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
    public ref class NewDataSet : public ::System::Data::DataSet {
        public : ref class CEGUIConfigDataTable;
        public : ref class LoggingDataTable;
        public : ref class AutoLoadDataTable;
        public : ref class ResourceDirectoryDataTable;
        public : ref class DefaultResourceGroupDataTable;
        public : ref class ScriptingDataTable;
        public : ref class DefaultXMLParserDataTable;
        public : ref class DefaultImageCodecDataTable;
        public : ref class DefaultFontDataTable;
        public : ref class DefaultMouseCursorDataTable;
        public : ref class DefaultTooltipDataTable;
        public : ref class DefaultGUISheetDataTable;
        public : ref class CEGUIConfigRow;
        public : ref class LoggingRow;
        public : ref class AutoLoadRow;
        public : ref class ResourceDirectoryRow;
        public : ref class DefaultResourceGroupRow;
        public : ref class ScriptingRow;
        public : ref class DefaultXMLParserRow;
        public : ref class DefaultImageCodecRow;
        public : ref class DefaultFontRow;
        public : ref class DefaultMouseCursorRow;
        public : ref class DefaultTooltipRow;
        public : ref class DefaultGUISheetRow;
        public : ref class CEGUIConfigRowChangeEvent;
        public : ref class LoggingRowChangeEvent;
        public : ref class AutoLoadRowChangeEvent;
        public : ref class ResourceDirectoryRowChangeEvent;
        public : ref class DefaultResourceGroupRowChangeEvent;
        public : ref class ScriptingRowChangeEvent;
        public : ref class DefaultXMLParserRowChangeEvent;
        public : ref class DefaultImageCodecRowChangeEvent;
        public : ref class DefaultFontRowChangeEvent;
        public : ref class DefaultMouseCursorRowChangeEvent;
        public : ref class DefaultTooltipRowChangeEvent;
        public : ref class DefaultGUISheetRowChangeEvent;
        
        private: spaceShip1414::NewDataSet::CEGUIConfigDataTable^  tableCEGUIConfig;
        
        private: spaceShip1414::NewDataSet::LoggingDataTable^  tableLogging;
        
        private: spaceShip1414::NewDataSet::AutoLoadDataTable^  tableAutoLoad;
        
        private: spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  tableResourceDirectory;
        
        private: spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  tableDefaultResourceGroup;
        
        private: spaceShip1414::NewDataSet::ScriptingDataTable^  tableScripting;
        
        private: spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  tableDefaultXMLParser;
        
        private: spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  tableDefaultImageCodec;
        
        private: spaceShip1414::NewDataSet::DefaultFontDataTable^  tableDefaultFont;
        
        private: spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  tableDefaultMouseCursor;
        
        private: spaceShip1414::NewDataSet::DefaultTooltipDataTable^  tableDefaultTooltip;
        
        private: spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  tableDefaultGUISheet;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_Logging;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_AutoLoad;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_ResourceDirectory;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultResourceGroup;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_Scripting;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultXMLParser;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultImageCodec;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultFont;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultMouseCursor;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultTooltip;
        
        private: ::System::Data::DataRelation^  relationCEGUIConfig_DefaultGUISheet;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void CEGUIConfigRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::CEGUIConfigRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void LoggingRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::LoggingRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void AutoLoadRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::AutoLoadRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void ResourceDirectoryRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultResourceGroupRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void ScriptingRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::ScriptingRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultXMLParserRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultImageCodecRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultFontRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultFontRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultMouseCursorRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultTooltipRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultTooltipRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DefaultGUISheetRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEvent^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet();
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::CEGUIConfigDataTable^  CEGUIConfig {
            spaceShip1414::NewDataSet::CEGUIConfigDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::LoggingDataTable^  Logging {
            spaceShip1414::NewDataSet::LoggingDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::AutoLoadDataTable^  AutoLoad {
            spaceShip1414::NewDataSet::AutoLoadDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  ResourceDirectory {
            spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  DefaultResourceGroup {
            spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::ScriptingDataTable^  Scripting {
            spaceShip1414::NewDataSet::ScriptingDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  DefaultXMLParser {
            spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  DefaultImageCodec {
            spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultFontDataTable^  DefaultFont {
            spaceShip1414::NewDataSet::DefaultFontDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  DefaultMouseCursor {
            spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultTooltipDataTable^  DefaultTooltip {
            spaceShip1414::NewDataSet::DefaultTooltipDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  DefaultGUISheet {
            spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::BrowsableAttribute(true), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
        virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
            ::System::Data::SchemaSerializationMode get() override;
            System::Void set(::System::Data::SchemaSerializationMode value) override;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataTableCollection^  Tables {
            ::System::Data::DataTableCollection^  get() new;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataRelationCollection^  Relations {
            ::System::Data::DataRelationCollection^  get() new;
        }
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void InitializeDerivedDataSet() override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataSet^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeTables() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeRelations() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars(::System::Boolean initTable);
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeCEGUIConfig();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeLogging();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeAutoLoad();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeResourceDirectory();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultResourceGroup();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeScripting();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultXMLParser();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultImageCodec();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultFont();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultMouseCursor();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultTooltip();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDefaultGUISheet();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class CEGUIConfigDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::CEGUIConfigRowChangeEventHandler^  CEGUIConfigRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::CEGUIConfigRowChangeEventHandler^  CEGUIConfigRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::CEGUIConfigRowChangeEventHandler^  CEGUIConfigRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::CEGUIConfigRowChangeEventHandler^  CEGUIConfigRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CEGUIConfigDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CEGUIConfigDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CEGUIConfigDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddCEGUIConfigRow(spaceShip1414::NewDataSet::CEGUIConfigRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::CEGUIConfigRow^  AddCEGUIConfigRow();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::CEGUIConfigRow^  NewCEGUIConfigRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveCEGUIConfigRow(spaceShip1414::NewDataSet::CEGUIConfigRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class LoggingDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnfilename;
            
            private: ::System::Data::DataColumn^  columnlevel;
            
            private: ::System::Data::DataColumn^  columnLogging_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::LoggingRowChangeEventHandler^  LoggingRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::LoggingRowChangeEventHandler^  LoggingRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::LoggingRowChangeEventHandler^  LoggingRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::LoggingRowChangeEventHandler^  LoggingRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            LoggingDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            LoggingDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            LoggingDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  filenameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  levelColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Logging_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::LoggingRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::LoggingRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddLoggingRow(spaceShip1414::NewDataSet::LoggingRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::LoggingRow^  AddLoggingRow(System::String^  filename, System::String^  level, System::String^  Logging_text, 
                        spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_Logging);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::LoggingRow^  NewLoggingRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveLoggingRow(spaceShip1414::NewDataSet::LoggingRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class AutoLoadDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columntype;
            
            private: ::System::Data::DataColumn^  columngroup;
            
            private: ::System::Data::DataColumn^  columnpattern;
            
            private: ::System::Data::DataColumn^  columnAutoLoad_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AutoLoadRowChangeEventHandler^  AutoLoadRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AutoLoadRowChangeEventHandler^  AutoLoadRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AutoLoadRowChangeEventHandler^  AutoLoadRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AutoLoadRowChangeEventHandler^  AutoLoadRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AutoLoadDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AutoLoadDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AutoLoadDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  typeColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  groupColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  patternColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  AutoLoad_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AutoLoadRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::AutoLoadRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddAutoLoadRow(spaceShip1414::NewDataSet::AutoLoadRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::AutoLoadRow^  AddAutoLoadRow(System::String^  type, System::String^  group, System::String^  pattern, 
                        System::String^  AutoLoad_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_AutoLoad);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::AutoLoadRow^  NewAutoLoadRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveAutoLoadRow(spaceShip1414::NewDataSet::AutoLoadRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class ResourceDirectoryDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columngroup;
            
            private: ::System::Data::DataColumn^  columndirectory;
            
            private: ::System::Data::DataColumn^  columnResourceDirectory_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEventHandler^  ResourceDirectoryRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEventHandler^  ResourceDirectoryRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEventHandler^  ResourceDirectoryRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEventHandler^  ResourceDirectoryRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ResourceDirectoryDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ResourceDirectoryDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ResourceDirectoryDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  groupColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  directoryColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  ResourceDirectory_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::ResourceDirectoryRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::ResourceDirectoryRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddResourceDirectoryRow(spaceShip1414::NewDataSet::ResourceDirectoryRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::ResourceDirectoryRow^  AddResourceDirectoryRow(System::String^  group, System::String^  directory, 
                        System::String^  ResourceDirectory_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_ResourceDirectory);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::ResourceDirectoryRow^  NewResourceDirectoryRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveResourceDirectoryRow(spaceShip1414::NewDataSet::ResourceDirectoryRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultResourceGroupDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columntype;
            
            private: ::System::Data::DataColumn^  columngroup;
            
            private: ::System::Data::DataColumn^  columnDefaultResourceGroup_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEventHandler^  DefaultResourceGroupRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEventHandler^  DefaultResourceGroupRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEventHandler^  DefaultResourceGroupRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEventHandler^  DefaultResourceGroupRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultResourceGroupDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultResourceGroupDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultResourceGroupDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  typeColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  groupColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultResourceGroup_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultResourceGroupRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultResourceGroupRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultResourceGroupRow(spaceShip1414::NewDataSet::DefaultResourceGroupRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultResourceGroupRow^  AddDefaultResourceGroupRow(System::String^  type, System::String^  group, 
                        System::String^  DefaultResourceGroup_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultResourceGroup);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultResourceGroupRow^  NewDefaultResourceGroupRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultResourceGroupRow(spaceShip1414::NewDataSet::DefaultResourceGroupRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class ScriptingDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columninitScript;
            
            private: ::System::Data::DataColumn^  columnterminateScript;
            
            private: ::System::Data::DataColumn^  columnScripting_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ScriptingRowChangeEventHandler^  ScriptingRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ScriptingRowChangeEventHandler^  ScriptingRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ScriptingRowChangeEventHandler^  ScriptingRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::ScriptingRowChangeEventHandler^  ScriptingRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ScriptingDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ScriptingDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ScriptingDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  initScriptColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  terminateScriptColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Scripting_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::ScriptingRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::ScriptingRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddScriptingRow(spaceShip1414::NewDataSet::ScriptingRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::ScriptingRow^  AddScriptingRow(System::String^  initScript, System::String^  terminateScript, 
                        System::String^  Scripting_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_Scripting);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::ScriptingRow^  NewScriptingRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveScriptingRow(spaceShip1414::NewDataSet::ScriptingRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultXMLParserDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnDefaultXMLParser_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEventHandler^  DefaultXMLParserRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEventHandler^  DefaultXMLParserRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEventHandler^  DefaultXMLParserRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEventHandler^  DefaultXMLParserRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultXMLParserDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultXMLParserDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultXMLParserDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultXMLParser_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultXMLParserRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultXMLParserRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultXMLParserRow(spaceShip1414::NewDataSet::DefaultXMLParserRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultXMLParserRow^  AddDefaultXMLParserRow(System::String^  name, System::String^  DefaultXMLParser_text, 
                        spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultXMLParser);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultXMLParserRow^  NewDefaultXMLParserRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultXMLParserRow(spaceShip1414::NewDataSet::DefaultXMLParserRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultImageCodecDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnDefaultImageCodec_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEventHandler^  DefaultImageCodecRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEventHandler^  DefaultImageCodecRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEventHandler^  DefaultImageCodecRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEventHandler^  DefaultImageCodecRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultImageCodecDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultImageCodecDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultImageCodecDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultImageCodec_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultImageCodecRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultImageCodecRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultImageCodecRow(spaceShip1414::NewDataSet::DefaultImageCodecRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultImageCodecRow^  AddDefaultImageCodecRow(System::String^  name, System::String^  DefaultImageCodec_text, 
                        spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultImageCodec);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultImageCodecRow^  NewDefaultImageCodecRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultImageCodecRow(spaceShip1414::NewDataSet::DefaultImageCodecRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultFontDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnDefaultFont_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultFontRowChangeEventHandler^  DefaultFontRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultFontRowChangeEventHandler^  DefaultFontRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultFontRowChangeEventHandler^  DefaultFontRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultFontRowChangeEventHandler^  DefaultFontRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultFontDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultFontDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultFontDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultFont_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultFontRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultFontRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultFontRow(spaceShip1414::NewDataSet::DefaultFontRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultFontRow^  AddDefaultFontRow(System::String^  name, System::String^  DefaultFont_text, 
                        spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultFont);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultFontRow^  NewDefaultFontRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultFontRow(spaceShip1414::NewDataSet::DefaultFontRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultMouseCursorDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnimageset;
            
            private: ::System::Data::DataColumn^  columnimage;
            
            private: ::System::Data::DataColumn^  columnDefaultMouseCursor_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEventHandler^  DefaultMouseCursorRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEventHandler^  DefaultMouseCursorRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEventHandler^  DefaultMouseCursorRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEventHandler^  DefaultMouseCursorRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultMouseCursorDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultMouseCursorDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultMouseCursorDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  imagesetColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  imageColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultMouseCursor_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultMouseCursorRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultMouseCursorRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultMouseCursorRow(spaceShip1414::NewDataSet::DefaultMouseCursorRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultMouseCursorRow^  AddDefaultMouseCursorRow(System::String^  imageset, System::String^  image, 
                        System::String^  DefaultMouseCursor_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultMouseCursor);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultMouseCursorRow^  NewDefaultMouseCursorRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultMouseCursorRow(spaceShip1414::NewDataSet::DefaultMouseCursorRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultTooltipDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnDefaultTooltip_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultTooltipRowChangeEventHandler^  DefaultTooltipRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultTooltipRowChangeEventHandler^  DefaultTooltipRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultTooltipRowChangeEventHandler^  DefaultTooltipRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultTooltipRowChangeEventHandler^  DefaultTooltipRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultTooltipDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultTooltipDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultTooltipDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultTooltip_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultTooltipRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultTooltipRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultTooltipRow(spaceShip1414::NewDataSet::DefaultTooltipRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultTooltipRow^  AddDefaultTooltipRow(System::String^  name, System::String^  DefaultTooltip_text, 
                        spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultTooltip);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultTooltipRow^  NewDefaultTooltipRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultTooltipRow(spaceShip1414::NewDataSet::DefaultTooltipRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DefaultGUISheetDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnDefaultGUISheet_text;
            
            private: ::System::Data::DataColumn^  columnCEGUIConfig_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEventHandler^  DefaultGUISheetRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEventHandler^  DefaultGUISheetRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEventHandler^  DefaultGUISheetRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEventHandler^  DefaultGUISheetRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultGUISheetDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultGUISheetDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultGUISheetDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  DefaultGUISheet_textColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  CEGUIConfig_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultGUISheetRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::DefaultGUISheetRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDefaultGUISheetRow(spaceShip1414::NewDataSet::DefaultGUISheetRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultGUISheetRow^  AddDefaultGUISheetRow(System::String^  name, System::String^  DefaultGUISheet_text, 
                        spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultGUISheet);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::DefaultGUISheetRow^  NewDefaultGUISheetRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDefaultGUISheetRow(spaceShip1414::NewDataSet::DefaultGUISheetRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class CEGUIConfigRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::CEGUIConfigDataTable^  tableCEGUIConfig;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CEGUIConfigRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::LoggingRow^  >^  GetLoggingRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::AutoLoadRow^  >^  GetAutoLoadRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::ResourceDirectoryRow^  >^  GetResourceDirectoryRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >^  GetDefaultResourceGroupRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::ScriptingRow^  >^  GetScriptingRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultXMLParserRow^  >^  GetDefaultXMLParserRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultImageCodecRow^  >^  GetDefaultImageCodecRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultFontRow^  >^  GetDefaultFontRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >^  GetDefaultMouseCursorRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultTooltipRow^  >^  GetDefaultTooltipRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::DefaultGUISheetRow^  >^  GetDefaultGUISheetRows();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class LoggingRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::LoggingDataTable^  tableLogging;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            LoggingRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  filename {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  level {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  Logging_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsfilenameNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetfilenameNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IslevelNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetlevelNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class AutoLoadRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::AutoLoadDataTable^  tableAutoLoad;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AutoLoadRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  type {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  group {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  pattern {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  AutoLoad_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsgroupNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetgroupNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IspatternNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetpatternNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class ResourceDirectoryRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  tableResourceDirectory;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ResourceDirectoryRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  group {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  directory {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  ResourceDirectory_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultResourceGroupRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  tableDefaultResourceGroup;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultResourceGroupRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  type {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  group {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultResourceGroup_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IstypeNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SettypeNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class ScriptingRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::ScriptingDataTable^  tableScripting;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ScriptingRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  initScript {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  terminateScript {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  Scripting_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsinitScriptNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetinitScriptNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsterminateScriptNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetterminateScriptNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultXMLParserRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  tableDefaultXMLParser;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultXMLParserRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultXMLParser_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultImageCodecRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  tableDefaultImageCodec;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultImageCodecRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultImageCodec_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultFontRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultFontDataTable^  tableDefaultFont;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultFontRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultFont_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultMouseCursorRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  tableDefaultMouseCursor;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultMouseCursorRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  imageset {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  image {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultMouseCursor_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultTooltipRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultTooltipDataTable^  tableDefaultTooltip;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultTooltipRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultTooltip_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DefaultGUISheetRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  tableDefaultGUISheet;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultGUISheetRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  DefaultGUISheet_text {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 CEGUIConfig_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  CEGUIConfigRow {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
                System::Void set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsCEGUIConfig_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetCEGUIConfig_IdNull();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class CEGUIConfigRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::CEGUIConfigRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CEGUIConfigRowChangeEvent(spaceShip1414::NewDataSet::CEGUIConfigRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::CEGUIConfigRow^  Row {
                spaceShip1414::NewDataSet::CEGUIConfigRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class LoggingRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::LoggingRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            LoggingRowChangeEvent(spaceShip1414::NewDataSet::LoggingRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::LoggingRow^  Row {
                spaceShip1414::NewDataSet::LoggingRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class AutoLoadRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::AutoLoadRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AutoLoadRowChangeEvent(spaceShip1414::NewDataSet::AutoLoadRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AutoLoadRow^  Row {
                spaceShip1414::NewDataSet::AutoLoadRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class ResourceDirectoryRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::ResourceDirectoryRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ResourceDirectoryRowChangeEvent(spaceShip1414::NewDataSet::ResourceDirectoryRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::ResourceDirectoryRow^  Row {
                spaceShip1414::NewDataSet::ResourceDirectoryRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultResourceGroupRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultResourceGroupRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultResourceGroupRowChangeEvent(spaceShip1414::NewDataSet::DefaultResourceGroupRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultResourceGroupRow^  Row {
                spaceShip1414::NewDataSet::DefaultResourceGroupRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class ScriptingRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::ScriptingRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ScriptingRowChangeEvent(spaceShip1414::NewDataSet::ScriptingRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::ScriptingRow^  Row {
                spaceShip1414::NewDataSet::ScriptingRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultXMLParserRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultXMLParserRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultXMLParserRowChangeEvent(spaceShip1414::NewDataSet::DefaultXMLParserRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultXMLParserRow^  Row {
                spaceShip1414::NewDataSet::DefaultXMLParserRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultImageCodecRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultImageCodecRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultImageCodecRowChangeEvent(spaceShip1414::NewDataSet::DefaultImageCodecRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultImageCodecRow^  Row {
                spaceShip1414::NewDataSet::DefaultImageCodecRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultFontRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultFontRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultFontRowChangeEvent(spaceShip1414::NewDataSet::DefaultFontRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultFontRow^  Row {
                spaceShip1414::NewDataSet::DefaultFontRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultMouseCursorRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultMouseCursorRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultMouseCursorRowChangeEvent(spaceShip1414::NewDataSet::DefaultMouseCursorRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultMouseCursorRow^  Row {
                spaceShip1414::NewDataSet::DefaultMouseCursorRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultTooltipRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultTooltipRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultTooltipRowChangeEvent(spaceShip1414::NewDataSet::DefaultTooltipRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultTooltipRow^  Row {
                spaceShip1414::NewDataSet::DefaultTooltipRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DefaultGUISheetRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::DefaultGUISheetRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DefaultGUISheetRowChangeEvent(spaceShip1414::NewDataSet::DefaultGUISheetRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::DefaultGUISheetRow^  Row {
                spaceShip1414::NewDataSet::DefaultGUISheetRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
    };
}
namespace spaceShip1414 {
    
    
    inline NewDataSet::NewDataSet() {
        this->BeginInit();
        this->InitClass();
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &spaceShip1414::NewDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        __super::Relations->CollectionChanged += schemaChangedHandler;
        this->EndInit();
    }
    
    inline NewDataSet::NewDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataSet(info, context, false) {
        if (this->IsBinarySerialized(info, context) == true) {
            this->InitVars(false);
            ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &spaceShip1414::NewDataSet::SchemaChanged);
            this->Tables->CollectionChanged += schemaChangedHandler1;
            this->Relations->CollectionChanged += schemaChangedHandler1;
            return;
        }
        ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
        if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
            if (ds->Tables[L"CEGUIConfig"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::CEGUIConfigDataTable(ds->Tables[L"CEGUIConfig"])));
            }
            if (ds->Tables[L"Logging"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::LoggingDataTable(ds->Tables[L"Logging"])));
            }
            if (ds->Tables[L"AutoLoad"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AutoLoadDataTable(ds->Tables[L"AutoLoad"])));
            }
            if (ds->Tables[L"ResourceDirectory"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::ResourceDirectoryDataTable(ds->Tables[L"ResourceDirectory"])));
            }
            if (ds->Tables[L"DefaultResourceGroup"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultResourceGroupDataTable(ds->Tables[L"DefaultResourceGroup"])));
            }
            if (ds->Tables[L"Scripting"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::ScriptingDataTable(ds->Tables[L"Scripting"])));
            }
            if (ds->Tables[L"DefaultXMLParser"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultXMLParserDataTable(ds->Tables[L"DefaultXMLParser"])));
            }
            if (ds->Tables[L"DefaultImageCodec"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultImageCodecDataTable(ds->Tables[L"DefaultImageCodec"])));
            }
            if (ds->Tables[L"DefaultFont"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultFontDataTable(ds->Tables[L"DefaultFont"])));
            }
            if (ds->Tables[L"DefaultMouseCursor"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultMouseCursorDataTable(ds->Tables[L"DefaultMouseCursor"])));
            }
            if (ds->Tables[L"DefaultTooltip"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultTooltipDataTable(ds->Tables[L"DefaultTooltip"])));
            }
            if (ds->Tables[L"DefaultGUISheet"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultGUISheetDataTable(ds->Tables[L"DefaultGUISheet"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        }
        this->GetSerializationData(info, context);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &spaceShip1414::NewDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        this->Relations->CollectionChanged += schemaChangedHandler;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigDataTable^  NewDataSet::CEGUIConfig::get() {
        return this->tableCEGUIConfig;
    }
    
    inline spaceShip1414::NewDataSet::LoggingDataTable^  NewDataSet::Logging::get() {
        return this->tableLogging;
    }
    
    inline spaceShip1414::NewDataSet::AutoLoadDataTable^  NewDataSet::AutoLoad::get() {
        return this->tableAutoLoad;
    }
    
    inline spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  NewDataSet::ResourceDirectory::get() {
        return this->tableResourceDirectory;
    }
    
    inline spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  NewDataSet::DefaultResourceGroup::get() {
        return this->tableDefaultResourceGroup;
    }
    
    inline spaceShip1414::NewDataSet::ScriptingDataTable^  NewDataSet::Scripting::get() {
        return this->tableScripting;
    }
    
    inline spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  NewDataSet::DefaultXMLParser::get() {
        return this->tableDefaultXMLParser;
    }
    
    inline spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  NewDataSet::DefaultImageCodec::get() {
        return this->tableDefaultImageCodec;
    }
    
    inline spaceShip1414::NewDataSet::DefaultFontDataTable^  NewDataSet::DefaultFont::get() {
        return this->tableDefaultFont;
    }
    
    inline spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  NewDataSet::DefaultMouseCursor::get() {
        return this->tableDefaultMouseCursor;
    }
    
    inline spaceShip1414::NewDataSet::DefaultTooltipDataTable^  NewDataSet::DefaultTooltip::get() {
        return this->tableDefaultTooltip;
    }
    
    inline spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  NewDataSet::DefaultGUISheet::get() {
        return this->tableDefaultGUISheet;
    }
    
    inline ::System::Data::SchemaSerializationMode NewDataSet::SchemaSerializationMode::get() {
        return this->_schemaSerializationMode;
    }
    inline System::Void NewDataSet::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
        this->_schemaSerializationMode = __identifier(value);
    }
    
    inline ::System::Data::DataTableCollection^  NewDataSet::Tables::get() {
        return __super::Tables;
    }
    
    inline ::System::Data::DataRelationCollection^  NewDataSet::Relations::get() {
        return __super::Relations;
    }
    
    inline ::System::Void NewDataSet::InitializeDerivedDataSet() {
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline ::System::Data::DataSet^  NewDataSet::Clone() {
        spaceShip1414::NewDataSet^  cln = (cli::safe_cast<spaceShip1414::NewDataSet^  >(__super::Clone()));
        cln->InitVars();
        cln->SchemaSerializationMode = this->SchemaSerializationMode;
        return cln;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeTables() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeRelations() {
        return false;
    }
    
    inline ::System::Void NewDataSet::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
        if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            this->Reset();
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXml(reader);
            if (ds->Tables[L"CEGUIConfig"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::CEGUIConfigDataTable(ds->Tables[L"CEGUIConfig"])));
            }
            if (ds->Tables[L"Logging"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::LoggingDataTable(ds->Tables[L"Logging"])));
            }
            if (ds->Tables[L"AutoLoad"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AutoLoadDataTable(ds->Tables[L"AutoLoad"])));
            }
            if (ds->Tables[L"ResourceDirectory"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::ResourceDirectoryDataTable(ds->Tables[L"ResourceDirectory"])));
            }
            if (ds->Tables[L"DefaultResourceGroup"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultResourceGroupDataTable(ds->Tables[L"DefaultResourceGroup"])));
            }
            if (ds->Tables[L"Scripting"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::ScriptingDataTable(ds->Tables[L"Scripting"])));
            }
            if (ds->Tables[L"DefaultXMLParser"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultXMLParserDataTable(ds->Tables[L"DefaultXMLParser"])));
            }
            if (ds->Tables[L"DefaultImageCodec"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultImageCodecDataTable(ds->Tables[L"DefaultImageCodec"])));
            }
            if (ds->Tables[L"DefaultFont"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultFontDataTable(ds->Tables[L"DefaultFont"])));
            }
            if (ds->Tables[L"DefaultMouseCursor"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultMouseCursorDataTable(ds->Tables[L"DefaultMouseCursor"])));
            }
            if (ds->Tables[L"DefaultTooltip"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultTooltipDataTable(ds->Tables[L"DefaultTooltip"])));
            }
            if (ds->Tables[L"DefaultGUISheet"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::DefaultGUISheetDataTable(ds->Tables[L"DefaultGUISheet"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXml(reader);
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchema^  NewDataSet::GetSchemaSerializable() {
        ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
        this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
        stream->Position = 0;
        return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
    }
    
    inline ::System::Void NewDataSet::InitVars() {
        this->InitVars(true);
    }
    
    inline ::System::Void NewDataSet::InitVars(::System::Boolean initTable) {
        this->tableCEGUIConfig = (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigDataTable^  >(__super::Tables[L"CEGUIConfig"]));
        if (initTable == true) {
            if (this->tableCEGUIConfig != nullptr) {
                this->tableCEGUIConfig->InitVars();
            }
        }
        this->tableLogging = (cli::safe_cast<spaceShip1414::NewDataSet::LoggingDataTable^  >(__super::Tables[L"Logging"]));
        if (initTable == true) {
            if (this->tableLogging != nullptr) {
                this->tableLogging->InitVars();
            }
        }
        this->tableAutoLoad = (cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadDataTable^  >(__super::Tables[L"AutoLoad"]));
        if (initTable == true) {
            if (this->tableAutoLoad != nullptr) {
                this->tableAutoLoad->InitVars();
            }
        }
        this->tableResourceDirectory = (cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  >(__super::Tables[L"ResourceDirectory"]));
        if (initTable == true) {
            if (this->tableResourceDirectory != nullptr) {
                this->tableResourceDirectory->InitVars();
            }
        }
        this->tableDefaultResourceGroup = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  >(__super::Tables[L"DefaultResourceGroup"]));
        if (initTable == true) {
            if (this->tableDefaultResourceGroup != nullptr) {
                this->tableDefaultResourceGroup->InitVars();
            }
        }
        this->tableScripting = (cli::safe_cast<spaceShip1414::NewDataSet::ScriptingDataTable^  >(__super::Tables[L"Scripting"]));
        if (initTable == true) {
            if (this->tableScripting != nullptr) {
                this->tableScripting->InitVars();
            }
        }
        this->tableDefaultXMLParser = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  >(__super::Tables[L"DefaultXMLParser"]));
        if (initTable == true) {
            if (this->tableDefaultXMLParser != nullptr) {
                this->tableDefaultXMLParser->InitVars();
            }
        }
        this->tableDefaultImageCodec = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  >(__super::Tables[L"DefaultImageCodec"]));
        if (initTable == true) {
            if (this->tableDefaultImageCodec != nullptr) {
                this->tableDefaultImageCodec->InitVars();
            }
        }
        this->tableDefaultFont = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontDataTable^  >(__super::Tables[L"DefaultFont"]));
        if (initTable == true) {
            if (this->tableDefaultFont != nullptr) {
                this->tableDefaultFont->InitVars();
            }
        }
        this->tableDefaultMouseCursor = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  >(__super::Tables[L"DefaultMouseCursor"]));
        if (initTable == true) {
            if (this->tableDefaultMouseCursor != nullptr) {
                this->tableDefaultMouseCursor->InitVars();
            }
        }
        this->tableDefaultTooltip = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipDataTable^  >(__super::Tables[L"DefaultTooltip"]));
        if (initTable == true) {
            if (this->tableDefaultTooltip != nullptr) {
                this->tableDefaultTooltip->InitVars();
            }
        }
        this->tableDefaultGUISheet = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  >(__super::Tables[L"DefaultGUISheet"]));
        if (initTable == true) {
            if (this->tableDefaultGUISheet != nullptr) {
                this->tableDefaultGUISheet->InitVars();
            }
        }
        this->relationCEGUIConfig_Logging = this->Relations[L"CEGUIConfig_Logging"];
        this->relationCEGUIConfig_AutoLoad = this->Relations[L"CEGUIConfig_AutoLoad"];
        this->relationCEGUIConfig_ResourceDirectory = this->Relations[L"CEGUIConfig_ResourceDirectory"];
        this->relationCEGUIConfig_DefaultResourceGroup = this->Relations[L"CEGUIConfig_DefaultResourceGroup"];
        this->relationCEGUIConfig_Scripting = this->Relations[L"CEGUIConfig_Scripting"];
        this->relationCEGUIConfig_DefaultXMLParser = this->Relations[L"CEGUIConfig_DefaultXMLParser"];
        this->relationCEGUIConfig_DefaultImageCodec = this->Relations[L"CEGUIConfig_DefaultImageCodec"];
        this->relationCEGUIConfig_DefaultFont = this->Relations[L"CEGUIConfig_DefaultFont"];
        this->relationCEGUIConfig_DefaultMouseCursor = this->Relations[L"CEGUIConfig_DefaultMouseCursor"];
        this->relationCEGUIConfig_DefaultTooltip = this->Relations[L"CEGUIConfig_DefaultTooltip"];
        this->relationCEGUIConfig_DefaultGUISheet = this->Relations[L"CEGUIConfig_DefaultGUISheet"];
    }
    
    inline ::System::Void NewDataSet::InitClass() {
        this->DataSetName = L"NewDataSet";
        this->Prefix = L"";
        this->Locale = (gcnew ::System::Globalization::CultureInfo(L""));
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableCEGUIConfig = (gcnew spaceShip1414::NewDataSet::CEGUIConfigDataTable());
        __super::Tables->Add(this->tableCEGUIConfig);
        this->tableLogging = (gcnew spaceShip1414::NewDataSet::LoggingDataTable());
        __super::Tables->Add(this->tableLogging);
        this->tableAutoLoad = (gcnew spaceShip1414::NewDataSet::AutoLoadDataTable());
        __super::Tables->Add(this->tableAutoLoad);
        this->tableResourceDirectory = (gcnew spaceShip1414::NewDataSet::ResourceDirectoryDataTable());
        __super::Tables->Add(this->tableResourceDirectory);
        this->tableDefaultResourceGroup = (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupDataTable());
        __super::Tables->Add(this->tableDefaultResourceGroup);
        this->tableScripting = (gcnew spaceShip1414::NewDataSet::ScriptingDataTable());
        __super::Tables->Add(this->tableScripting);
        this->tableDefaultXMLParser = (gcnew spaceShip1414::NewDataSet::DefaultXMLParserDataTable());
        __super::Tables->Add(this->tableDefaultXMLParser);
        this->tableDefaultImageCodec = (gcnew spaceShip1414::NewDataSet::DefaultImageCodecDataTable());
        __super::Tables->Add(this->tableDefaultImageCodec);
        this->tableDefaultFont = (gcnew spaceShip1414::NewDataSet::DefaultFontDataTable());
        __super::Tables->Add(this->tableDefaultFont);
        this->tableDefaultMouseCursor = (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorDataTable());
        __super::Tables->Add(this->tableDefaultMouseCursor);
        this->tableDefaultTooltip = (gcnew spaceShip1414::NewDataSet::DefaultTooltipDataTable());
        __super::Tables->Add(this->tableDefaultTooltip);
        this->tableDefaultGUISheet = (gcnew spaceShip1414::NewDataSet::DefaultGUISheetDataTable());
        __super::Tables->Add(this->tableDefaultGUISheet);
        ::System::Data::ForeignKeyConstraint^  fkc;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_Logging", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableLogging->CEGUIConfig_IdColumn}));
        this->tableLogging->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_AutoLoad", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAutoLoad->CEGUIConfig_IdColumn}));
        this->tableAutoLoad->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_ResourceDirectory", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableResourceDirectory->CEGUIConfig_IdColumn}));
        this->tableResourceDirectory->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultResourceGroup", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultResourceGroup->CEGUIConfig_IdColumn}));
        this->tableDefaultResourceGroup->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_Scripting", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableScripting->CEGUIConfig_IdColumn}));
        this->tableScripting->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultXMLParser", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultXMLParser->CEGUIConfig_IdColumn}));
        this->tableDefaultXMLParser->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultImageCodec", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultImageCodec->CEGUIConfig_IdColumn}));
        this->tableDefaultImageCodec->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultFont", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultFont->CEGUIConfig_IdColumn}));
        this->tableDefaultFont->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultMouseCursor", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultMouseCursor->CEGUIConfig_IdColumn}));
        this->tableDefaultMouseCursor->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultTooltip", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultTooltip->CEGUIConfig_IdColumn}));
        this->tableDefaultTooltip->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"CEGUIConfig_DefaultGUISheet", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultGUISheet->CEGUIConfig_IdColumn}));
        this->tableDefaultGUISheet->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        this->relationCEGUIConfig_Logging = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_Logging", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableLogging->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_Logging->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_Logging);
        this->relationCEGUIConfig_AutoLoad = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_AutoLoad", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAutoLoad->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_AutoLoad->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_AutoLoad);
        this->relationCEGUIConfig_ResourceDirectory = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_ResourceDirectory", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableResourceDirectory->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_ResourceDirectory->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_ResourceDirectory);
        this->relationCEGUIConfig_DefaultResourceGroup = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultResourceGroup", 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultResourceGroup->CEGUIConfig_IdColumn}, 
            false));
        this->relationCEGUIConfig_DefaultResourceGroup->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultResourceGroup);
        this->relationCEGUIConfig_Scripting = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_Scripting", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableScripting->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_Scripting->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_Scripting);
        this->relationCEGUIConfig_DefaultXMLParser = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultXMLParser", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultXMLParser->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_DefaultXMLParser->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultXMLParser);
        this->relationCEGUIConfig_DefaultImageCodec = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultImageCodec", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultImageCodec->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_DefaultImageCodec->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultImageCodec);
        this->relationCEGUIConfig_DefaultFont = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultFont", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultFont->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_DefaultFont->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultFont);
        this->relationCEGUIConfig_DefaultMouseCursor = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultMouseCursor", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultMouseCursor->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_DefaultMouseCursor->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultMouseCursor);
        this->relationCEGUIConfig_DefaultTooltip = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultTooltip", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultTooltip->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_DefaultTooltip->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultTooltip);
        this->relationCEGUIConfig_DefaultGUISheet = (gcnew ::System::Data::DataRelation(L"CEGUIConfig_DefaultGUISheet", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableCEGUIConfig->CEGUIConfig_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableDefaultGUISheet->CEGUIConfig_IdColumn}, false));
        this->relationCEGUIConfig_DefaultGUISheet->Nested = true;
        this->Relations->Add(this->relationCEGUIConfig_DefaultGUISheet);
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeCEGUIConfig() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeLogging() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeAutoLoad() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeResourceDirectory() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultResourceGroup() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeScripting() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultXMLParser() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultImageCodec() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultFont() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultMouseCursor() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultTooltip() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeDefaultGUISheet() {
        return false;
    }
    
    inline ::System::Void NewDataSet::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
        if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any->Namespace = ds->Namespace;
        sequence->Items->Add(any);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::CEGUIConfigDataTable::CEGUIConfigDataTable() {
        this->TableName = L"CEGUIConfig";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::CEGUIConfigDataTable::CEGUIConfigDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::CEGUIConfigDataTable::CEGUIConfigDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::CEGUIConfigDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::CEGUIConfigDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::CEGUIConfigDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::AddCEGUIConfigRow(spaceShip1414::NewDataSet::CEGUIConfigRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::CEGUIConfigDataTable::AddCEGUIConfigRow() {
        spaceShip1414::NewDataSet::CEGUIConfigRow^  rowCEGUIConfigRow = (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(1) {nullptr};
        rowCEGUIConfigRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowCEGUIConfigRow);
        return rowCEGUIConfigRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::CEGUIConfigDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::CEGUIConfigDataTable::Clone() {
        spaceShip1414::NewDataSet::CEGUIConfigDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::CEGUIConfigDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::CEGUIConfigDataTable());
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::InitVars() {
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::InitClass() {
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnCEGUIConfig_Id}, 
                true)));
        this->columnCEGUIConfig_Id->AutoIncrement = true;
        this->columnCEGUIConfig_Id->AllowDBNull = false;
        this->columnCEGUIConfig_Id->Unique = true;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::CEGUIConfigDataTable::NewCEGUIConfigRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::CEGUIConfigDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::CEGUIConfigRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::CEGUIConfigDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::CEGUIConfigRow::typeid;
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->CEGUIConfigRowChanged(this, (gcnew spaceShip1414::NewDataSet::CEGUIConfigRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->CEGUIConfigRowChanging(this, (gcnew spaceShip1414::NewDataSet::CEGUIConfigRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->CEGUIConfigRowDeleted(this, (gcnew spaceShip1414::NewDataSet::CEGUIConfigRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->CEGUIConfigRowDeleting(this, (gcnew spaceShip1414::NewDataSet::CEGUIConfigRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::CEGUIConfigDataTable::RemoveCEGUIConfigRow(spaceShip1414::NewDataSet::CEGUIConfigRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::CEGUIConfigDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"CEGUIConfigDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::LoggingDataTable::LoggingDataTable() {
        this->TableName = L"Logging";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::LoggingDataTable::LoggingDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::LoggingDataTable::LoggingDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::LoggingDataTable::filenameColumn::get() {
        return this->columnfilename;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::LoggingDataTable::levelColumn::get() {
        return this->columnlevel;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::LoggingDataTable::Logging_textColumn::get() {
        return this->columnLogging_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::LoggingDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::LoggingDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::LoggingRow^  NewDataSet::LoggingDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::AddLoggingRow(spaceShip1414::NewDataSet::LoggingRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::LoggingRow^  NewDataSet::LoggingDataTable::AddLoggingRow(System::String^  filename, 
                System::String^  level, System::String^  Logging_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_Logging) {
        spaceShip1414::NewDataSet::LoggingRow^  rowLoggingRow = (cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {filename, level, Logging_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_Logging != nullptr) {
            columnValuesArray[3] = parentCEGUIConfigRowByCEGUIConfig_Logging[0];
        }
        rowLoggingRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowLoggingRow);
        return rowLoggingRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::LoggingDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::LoggingDataTable::Clone() {
        spaceShip1414::NewDataSet::LoggingDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::LoggingDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::LoggingDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::LoggingDataTable());
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::InitVars() {
        this->columnfilename = __super::Columns[L"filename"];
        this->columnlevel = __super::Columns[L"level"];
        this->columnLogging_text = __super::Columns[L"Logging_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::InitClass() {
        this->columnfilename = (gcnew ::System::Data::DataColumn(L"filename", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnfilename);
        this->columnlevel = (gcnew ::System::Data::DataColumn(L"level", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnlevel);
        this->columnLogging_text = (gcnew ::System::Data::DataColumn(L"Logging_text", ::System::String::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnLogging_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnfilename->Namespace = L"";
        this->columnfilename->DefaultValue = (cli::safe_cast<System::String^  >(L"CEGUI.log"));
        this->columnlevel->Namespace = L"";
        this->columnlevel->DefaultValue = (cli::safe_cast<System::String^  >(L"Standard"));
        this->columnLogging_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::LoggingRow^  NewDataSet::LoggingDataTable::NewLoggingRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::LoggingDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::LoggingRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::LoggingDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::LoggingRow::typeid;
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->LoggingRowChanged(this, (gcnew spaceShip1414::NewDataSet::LoggingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->LoggingRowChanging(this, (gcnew spaceShip1414::NewDataSet::LoggingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->LoggingRowDeleted(this, (gcnew spaceShip1414::NewDataSet::LoggingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->LoggingRowDeleting(this, (gcnew spaceShip1414::NewDataSet::LoggingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::LoggingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::LoggingDataTable::RemoveLoggingRow(spaceShip1414::NewDataSet::LoggingRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::LoggingDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"LoggingDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::AutoLoadDataTable::AutoLoadDataTable() {
        this->TableName = L"AutoLoad";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::AutoLoadDataTable::AutoLoadDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::AutoLoadDataTable::AutoLoadDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AutoLoadDataTable::typeColumn::get() {
        return this->columntype;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AutoLoadDataTable::groupColumn::get() {
        return this->columngroup;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AutoLoadDataTable::patternColumn::get() {
        return this->columnpattern;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AutoLoadDataTable::AutoLoad_textColumn::get() {
        return this->columnAutoLoad_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AutoLoadDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::AutoLoadDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::AutoLoadRow^  NewDataSet::AutoLoadDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::AddAutoLoadRow(spaceShip1414::NewDataSet::AutoLoadRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::AutoLoadRow^  NewDataSet::AutoLoadDataTable::AddAutoLoadRow(System::String^  type, 
                System::String^  group, System::String^  pattern, System::String^  AutoLoad_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_AutoLoad) {
        spaceShip1414::NewDataSet::AutoLoadRow^  rowAutoLoadRow = (cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(5) {type, group, pattern, 
            AutoLoad_text, nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_AutoLoad != nullptr) {
            columnValuesArray[4] = parentCEGUIConfigRowByCEGUIConfig_AutoLoad[0];
        }
        rowAutoLoadRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowAutoLoadRow);
        return rowAutoLoadRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::AutoLoadDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AutoLoadDataTable::Clone() {
        spaceShip1414::NewDataSet::AutoLoadDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AutoLoadDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::AutoLoadDataTable());
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::InitVars() {
        this->columntype = __super::Columns[L"type"];
        this->columngroup = __super::Columns[L"group"];
        this->columnpattern = __super::Columns[L"pattern"];
        this->columnAutoLoad_text = __super::Columns[L"AutoLoad_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::InitClass() {
        this->columntype = (gcnew ::System::Data::DataColumn(L"type", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columntype);
        this->columngroup = (gcnew ::System::Data::DataColumn(L"group", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columngroup);
        this->columnpattern = (gcnew ::System::Data::DataColumn(L"pattern", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnpattern);
        this->columnAutoLoad_text = (gcnew ::System::Data::DataColumn(L"AutoLoad_text", ::System::String::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnAutoLoad_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columntype->AllowDBNull = false;
        this->columntype->Namespace = L"";
        this->columngroup->Namespace = L"";
        this->columngroup->DefaultValue = (cli::safe_cast<System::String^  >(L""));
        this->columnpattern->Namespace = L"";
        this->columnpattern->DefaultValue = (cli::safe_cast<System::String^  >(L"*"));
        this->columnAutoLoad_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::AutoLoadRow^  NewDataSet::AutoLoadDataTable::NewAutoLoadRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::AutoLoadDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::AutoLoadRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::AutoLoadDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::AutoLoadRow::typeid;
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->AutoLoadRowChanged(this, (gcnew spaceShip1414::NewDataSet::AutoLoadRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->AutoLoadRowChanging(this, (gcnew spaceShip1414::NewDataSet::AutoLoadRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->AutoLoadRowDeleted(this, (gcnew spaceShip1414::NewDataSet::AutoLoadRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->AutoLoadRowDeleting(this, (gcnew spaceShip1414::NewDataSet::AutoLoadRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AutoLoadDataTable::RemoveAutoLoadRow(spaceShip1414::NewDataSet::AutoLoadRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::AutoLoadDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"AutoLoadDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::ResourceDirectoryDataTable::ResourceDirectoryDataTable() {
        this->TableName = L"ResourceDirectory";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::ResourceDirectoryDataTable::ResourceDirectoryDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::ResourceDirectoryDataTable::ResourceDirectoryDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ResourceDirectoryDataTable::groupColumn::get() {
        return this->columngroup;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ResourceDirectoryDataTable::directoryColumn::get() {
        return this->columndirectory;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ResourceDirectoryDataTable::ResourceDirectory_textColumn::get() {
        return this->columnResourceDirectory_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ResourceDirectoryDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::ResourceDirectoryDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::ResourceDirectoryRow^  NewDataSet::ResourceDirectoryDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::AddResourceDirectoryRow(spaceShip1414::NewDataSet::ResourceDirectoryRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::ResourceDirectoryRow^  NewDataSet::ResourceDirectoryDataTable::AddResourceDirectoryRow(
                System::String^  group, System::String^  directory, System::String^  ResourceDirectory_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_ResourceDirectory) {
        spaceShip1414::NewDataSet::ResourceDirectoryRow^  rowResourceDirectoryRow = (cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {group, directory, ResourceDirectory_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_ResourceDirectory != nullptr) {
            columnValuesArray[3] = parentCEGUIConfigRowByCEGUIConfig_ResourceDirectory[0];
        }
        rowResourceDirectoryRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowResourceDirectoryRow);
        return rowResourceDirectoryRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::ResourceDirectoryDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::ResourceDirectoryDataTable::Clone() {
        spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::ResourceDirectoryDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::ResourceDirectoryDataTable());
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::InitVars() {
        this->columngroup = __super::Columns[L"group"];
        this->columndirectory = __super::Columns[L"directory"];
        this->columnResourceDirectory_text = __super::Columns[L"ResourceDirectory_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::InitClass() {
        this->columngroup = (gcnew ::System::Data::DataColumn(L"group", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columngroup);
        this->columndirectory = (gcnew ::System::Data::DataColumn(L"directory", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columndirectory);
        this->columnResourceDirectory_text = (gcnew ::System::Data::DataColumn(L"ResourceDirectory_text", ::System::String::typeid, 
            nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnResourceDirectory_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columngroup->AllowDBNull = false;
        this->columngroup->Namespace = L"";
        this->columndirectory->AllowDBNull = false;
        this->columndirectory->Namespace = L"";
        this->columnResourceDirectory_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::ResourceDirectoryRow^  NewDataSet::ResourceDirectoryDataTable::NewResourceDirectoryRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::ResourceDirectoryDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::ResourceDirectoryRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::ResourceDirectoryDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::ResourceDirectoryRow::typeid;
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->ResourceDirectoryRowChanged(this, (gcnew spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->ResourceDirectoryRowChanging(this, (gcnew spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->ResourceDirectoryRowDeleted(this, (gcnew spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->ResourceDirectoryRowDeleting(this, (gcnew spaceShip1414::NewDataSet::ResourceDirectoryRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryDataTable::RemoveResourceDirectoryRow(spaceShip1414::NewDataSet::ResourceDirectoryRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::ResourceDirectoryDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"ResourceDirectoryDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultResourceGroupDataTable::DefaultResourceGroupDataTable() {
        this->TableName = L"DefaultResourceGroup";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultResourceGroupDataTable::DefaultResourceGroupDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultResourceGroupDataTable::DefaultResourceGroupDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultResourceGroupDataTable::typeColumn::get() {
        return this->columntype;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultResourceGroupDataTable::groupColumn::get() {
        return this->columngroup;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultResourceGroupDataTable::DefaultResourceGroup_textColumn::get() {
        return this->columnDefaultResourceGroup_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultResourceGroupDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultResourceGroupDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultResourceGroupRow^  NewDataSet::DefaultResourceGroupDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::AddDefaultResourceGroupRow(spaceShip1414::NewDataSet::DefaultResourceGroupRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultResourceGroupRow^  NewDataSet::DefaultResourceGroupDataTable::AddDefaultResourceGroupRow(
                System::String^  type, System::String^  group, System::String^  DefaultResourceGroup_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultResourceGroup) {
        spaceShip1414::NewDataSet::DefaultResourceGroupRow^  rowDefaultResourceGroupRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {type, group, DefaultResourceGroup_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultResourceGroup != nullptr) {
            columnValuesArray[3] = parentCEGUIConfigRowByCEGUIConfig_DefaultResourceGroup[0];
        }
        rowDefaultResourceGroupRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultResourceGroupRow);
        return rowDefaultResourceGroupRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultResourceGroupDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultResourceGroupDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultResourceGroupDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::InitVars() {
        this->columntype = __super::Columns[L"type"];
        this->columngroup = __super::Columns[L"group"];
        this->columnDefaultResourceGroup_text = __super::Columns[L"DefaultResourceGroup_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::InitClass() {
        this->columntype = (gcnew ::System::Data::DataColumn(L"type", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columntype);
        this->columngroup = (gcnew ::System::Data::DataColumn(L"group", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columngroup);
        this->columnDefaultResourceGroup_text = (gcnew ::System::Data::DataColumn(L"DefaultResourceGroup_text", ::System::String::typeid, 
            nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultResourceGroup_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columntype->Namespace = L"";
        this->columntype->DefaultValue = (cli::safe_cast<System::String^  >(L"Default"));
        this->columngroup->AllowDBNull = false;
        this->columngroup->Namespace = L"";
        this->columnDefaultResourceGroup_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultResourceGroupRow^  NewDataSet::DefaultResourceGroupDataTable::NewDefaultResourceGroupRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultResourceGroupDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultResourceGroupDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultResourceGroupRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultResourceGroupRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultResourceGroupRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultResourceGroupRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultResourceGroupRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultResourceGroupRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupDataTable::RemoveDefaultResourceGroupRow(spaceShip1414::NewDataSet::DefaultResourceGroupRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultResourceGroupDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultResourceGroupDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::ScriptingDataTable::ScriptingDataTable() {
        this->TableName = L"Scripting";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::ScriptingDataTable::ScriptingDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::ScriptingDataTable::ScriptingDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ScriptingDataTable::initScriptColumn::get() {
        return this->columninitScript;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ScriptingDataTable::terminateScriptColumn::get() {
        return this->columnterminateScript;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ScriptingDataTable::Scripting_textColumn::get() {
        return this->columnScripting_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::ScriptingDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::ScriptingDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::ScriptingRow^  NewDataSet::ScriptingDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::AddScriptingRow(spaceShip1414::NewDataSet::ScriptingRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::ScriptingRow^  NewDataSet::ScriptingDataTable::AddScriptingRow(System::String^  initScript, 
                System::String^  terminateScript, System::String^  Scripting_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_Scripting) {
        spaceShip1414::NewDataSet::ScriptingRow^  rowScriptingRow = (cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {initScript, terminateScript, 
            Scripting_text, nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_Scripting != nullptr) {
            columnValuesArray[3] = parentCEGUIConfigRowByCEGUIConfig_Scripting[0];
        }
        rowScriptingRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowScriptingRow);
        return rowScriptingRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::ScriptingDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::ScriptingDataTable::Clone() {
        spaceShip1414::NewDataSet::ScriptingDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::ScriptingDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::ScriptingDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::ScriptingDataTable());
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::InitVars() {
        this->columninitScript = __super::Columns[L"initScript"];
        this->columnterminateScript = __super::Columns[L"terminateScript"];
        this->columnScripting_text = __super::Columns[L"Scripting_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::InitClass() {
        this->columninitScript = (gcnew ::System::Data::DataColumn(L"initScript", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columninitScript);
        this->columnterminateScript = (gcnew ::System::Data::DataColumn(L"terminateScript", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnterminateScript);
        this->columnScripting_text = (gcnew ::System::Data::DataColumn(L"Scripting_text", ::System::String::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnScripting_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columninitScript->Namespace = L"";
        this->columninitScript->DefaultValue = (cli::safe_cast<System::String^  >(L""));
        this->columnterminateScript->Namespace = L"";
        this->columnterminateScript->DefaultValue = (cli::safe_cast<System::String^  >(L""));
        this->columnScripting_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::ScriptingRow^  NewDataSet::ScriptingDataTable::NewScriptingRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::ScriptingDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::ScriptingRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::ScriptingDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::ScriptingRow::typeid;
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->ScriptingRowChanged(this, (gcnew spaceShip1414::NewDataSet::ScriptingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->ScriptingRowChanging(this, (gcnew spaceShip1414::NewDataSet::ScriptingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->ScriptingRowDeleted(this, (gcnew spaceShip1414::NewDataSet::ScriptingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->ScriptingRowDeleting(this, (gcnew spaceShip1414::NewDataSet::ScriptingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::ScriptingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::ScriptingDataTable::RemoveScriptingRow(spaceShip1414::NewDataSet::ScriptingRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::ScriptingDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"ScriptingDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultXMLParserDataTable::DefaultXMLParserDataTable() {
        this->TableName = L"DefaultXMLParser";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultXMLParserDataTable::DefaultXMLParserDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultXMLParserDataTable::DefaultXMLParserDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultXMLParserDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultXMLParserDataTable::DefaultXMLParser_textColumn::get() {
        return this->columnDefaultXMLParser_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultXMLParserDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultXMLParserDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultXMLParserRow^  NewDataSet::DefaultXMLParserDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::AddDefaultXMLParserRow(spaceShip1414::NewDataSet::DefaultXMLParserRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultXMLParserRow^  NewDataSet::DefaultXMLParserDataTable::AddDefaultXMLParserRow(
                System::String^  name, System::String^  DefaultXMLParser_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultXMLParser) {
        spaceShip1414::NewDataSet::DefaultXMLParserRow^  rowDefaultXMLParserRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {name, DefaultXMLParser_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultXMLParser != nullptr) {
            columnValuesArray[2] = parentCEGUIConfigRowByCEGUIConfig_DefaultXMLParser[0];
        }
        rowDefaultXMLParserRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultXMLParserRow);
        return rowDefaultXMLParserRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultXMLParserDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultXMLParserDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultXMLParserDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultXMLParserDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnDefaultXMLParser_text = __super::Columns[L"DefaultXMLParser_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnDefaultXMLParser_text = (gcnew ::System::Data::DataColumn(L"DefaultXMLParser_text", ::System::String::typeid, 
            nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultXMLParser_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnDefaultXMLParser_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultXMLParserRow^  NewDataSet::DefaultXMLParserDataTable::NewDefaultXMLParserRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultXMLParserDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultXMLParserRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultXMLParserDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultXMLParserRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultXMLParserRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultXMLParserRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultXMLParserRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultXMLParserRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultXMLParserRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserDataTable::RemoveDefaultXMLParserRow(spaceShip1414::NewDataSet::DefaultXMLParserRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultXMLParserDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultXMLParserDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultImageCodecDataTable::DefaultImageCodecDataTable() {
        this->TableName = L"DefaultImageCodec";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultImageCodecDataTable::DefaultImageCodecDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultImageCodecDataTable::DefaultImageCodecDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultImageCodecDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultImageCodecDataTable::DefaultImageCodec_textColumn::get() {
        return this->columnDefaultImageCodec_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultImageCodecDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultImageCodecDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultImageCodecRow^  NewDataSet::DefaultImageCodecDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::AddDefaultImageCodecRow(spaceShip1414::NewDataSet::DefaultImageCodecRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultImageCodecRow^  NewDataSet::DefaultImageCodecDataTable::AddDefaultImageCodecRow(
                System::String^  name, System::String^  DefaultImageCodec_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultImageCodec) {
        spaceShip1414::NewDataSet::DefaultImageCodecRow^  rowDefaultImageCodecRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {name, DefaultImageCodec_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultImageCodec != nullptr) {
            columnValuesArray[2] = parentCEGUIConfigRowByCEGUIConfig_DefaultImageCodec[0];
        }
        rowDefaultImageCodecRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultImageCodecRow);
        return rowDefaultImageCodecRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultImageCodecDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultImageCodecDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultImageCodecDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultImageCodecDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnDefaultImageCodec_text = __super::Columns[L"DefaultImageCodec_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnDefaultImageCodec_text = (gcnew ::System::Data::DataColumn(L"DefaultImageCodec_text", ::System::String::typeid, 
            nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultImageCodec_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnDefaultImageCodec_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultImageCodecRow^  NewDataSet::DefaultImageCodecDataTable::NewDefaultImageCodecRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultImageCodecDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultImageCodecRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultImageCodecDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultImageCodecRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultImageCodecRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultImageCodecRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultImageCodecRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultImageCodecRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultImageCodecRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecDataTable::RemoveDefaultImageCodecRow(spaceShip1414::NewDataSet::DefaultImageCodecRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultImageCodecDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultImageCodecDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultFontDataTable::DefaultFontDataTable() {
        this->TableName = L"DefaultFont";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultFontDataTable::DefaultFontDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultFontDataTable::DefaultFontDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultFontDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultFontDataTable::DefaultFont_textColumn::get() {
        return this->columnDefaultFont_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultFontDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultFontDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultFontRow^  NewDataSet::DefaultFontDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::AddDefaultFontRow(spaceShip1414::NewDataSet::DefaultFontRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultFontRow^  NewDataSet::DefaultFontDataTable::AddDefaultFontRow(System::String^  name, 
                System::String^  DefaultFont_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultFont) {
        spaceShip1414::NewDataSet::DefaultFontRow^  rowDefaultFontRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {name, DefaultFont_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultFont != nullptr) {
            columnValuesArray[2] = parentCEGUIConfigRowByCEGUIConfig_DefaultFont[0];
        }
        rowDefaultFontRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultFontRow);
        return rowDefaultFontRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultFontDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultFontDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultFontDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultFontDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultFontDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnDefaultFont_text = __super::Columns[L"DefaultFont_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnDefaultFont_text = (gcnew ::System::Data::DataColumn(L"DefaultFont_text", ::System::String::typeid, nullptr, 
            ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultFont_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnDefaultFont_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultFontRow^  NewDataSet::DefaultFontDataTable::NewDefaultFontRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultFontDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultFontRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultFontDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultFontRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultFontRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultFontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultFontRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultFontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultFontRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultFontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultFontRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultFontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultFontDataTable::RemoveDefaultFontRow(spaceShip1414::NewDataSet::DefaultFontRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultFontDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultFontDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultMouseCursorDataTable::DefaultMouseCursorDataTable() {
        this->TableName = L"DefaultMouseCursor";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultMouseCursorDataTable::DefaultMouseCursorDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultMouseCursorDataTable::DefaultMouseCursorDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultMouseCursorDataTable::imagesetColumn::get() {
        return this->columnimageset;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultMouseCursorDataTable::imageColumn::get() {
        return this->columnimage;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultMouseCursorDataTable::DefaultMouseCursor_textColumn::get() {
        return this->columnDefaultMouseCursor_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultMouseCursorDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultMouseCursorDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultMouseCursorRow^  NewDataSet::DefaultMouseCursorDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::AddDefaultMouseCursorRow(spaceShip1414::NewDataSet::DefaultMouseCursorRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultMouseCursorRow^  NewDataSet::DefaultMouseCursorDataTable::AddDefaultMouseCursorRow(
                System::String^  imageset, System::String^  image, System::String^  DefaultMouseCursor_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultMouseCursor) {
        spaceShip1414::NewDataSet::DefaultMouseCursorRow^  rowDefaultMouseCursorRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {imageset, image, DefaultMouseCursor_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultMouseCursor != nullptr) {
            columnValuesArray[3] = parentCEGUIConfigRowByCEGUIConfig_DefaultMouseCursor[0];
        }
        rowDefaultMouseCursorRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultMouseCursorRow);
        return rowDefaultMouseCursorRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultMouseCursorDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultMouseCursorDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultMouseCursorDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::InitVars() {
        this->columnimageset = __super::Columns[L"imageset"];
        this->columnimage = __super::Columns[L"image"];
        this->columnDefaultMouseCursor_text = __super::Columns[L"DefaultMouseCursor_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::InitClass() {
        this->columnimageset = (gcnew ::System::Data::DataColumn(L"imageset", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnimageset);
        this->columnimage = (gcnew ::System::Data::DataColumn(L"image", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnimage);
        this->columnDefaultMouseCursor_text = (gcnew ::System::Data::DataColumn(L"DefaultMouseCursor_text", ::System::String::typeid, 
            nullptr, ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultMouseCursor_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnimageset->AllowDBNull = false;
        this->columnimageset->Namespace = L"";
        this->columnimage->AllowDBNull = false;
        this->columnimage->Namespace = L"";
        this->columnDefaultMouseCursor_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultMouseCursorRow^  NewDataSet::DefaultMouseCursorDataTable::NewDefaultMouseCursorRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultMouseCursorDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultMouseCursorDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultMouseCursorRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultMouseCursorRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultMouseCursorRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultMouseCursorRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultMouseCursorRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultMouseCursorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorDataTable::RemoveDefaultMouseCursorRow(spaceShip1414::NewDataSet::DefaultMouseCursorRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultMouseCursorDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultMouseCursorDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultTooltipDataTable::DefaultTooltipDataTable() {
        this->TableName = L"DefaultTooltip";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultTooltipDataTable::DefaultTooltipDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultTooltipDataTable::DefaultTooltipDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultTooltipDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultTooltipDataTable::DefaultTooltip_textColumn::get() {
        return this->columnDefaultTooltip_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultTooltipDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultTooltipDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultTooltipRow^  NewDataSet::DefaultTooltipDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::AddDefaultTooltipRow(spaceShip1414::NewDataSet::DefaultTooltipRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultTooltipRow^  NewDataSet::DefaultTooltipDataTable::AddDefaultTooltipRow(System::String^  name, 
                System::String^  DefaultTooltip_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultTooltip) {
        spaceShip1414::NewDataSet::DefaultTooltipRow^  rowDefaultTooltipRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {name, DefaultTooltip_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultTooltip != nullptr) {
            columnValuesArray[2] = parentCEGUIConfigRowByCEGUIConfig_DefaultTooltip[0];
        }
        rowDefaultTooltipRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultTooltipRow);
        return rowDefaultTooltipRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultTooltipDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultTooltipDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultTooltipDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultTooltipDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultTooltipDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnDefaultTooltip_text = __super::Columns[L"DefaultTooltip_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnDefaultTooltip_text = (gcnew ::System::Data::DataColumn(L"DefaultTooltip_text", ::System::String::typeid, nullptr, 
            ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultTooltip_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnDefaultTooltip_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultTooltipRow^  NewDataSet::DefaultTooltipDataTable::NewDefaultTooltipRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultTooltipDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultTooltipRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultTooltipDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultTooltipRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultTooltipRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultTooltipRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultTooltipRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultTooltipRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultTooltipRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultTooltipRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultTooltipRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultTooltipRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipDataTable::RemoveDefaultTooltipRow(spaceShip1414::NewDataSet::DefaultTooltipRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultTooltipDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultTooltipDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::DefaultGUISheetDataTable::DefaultGUISheetDataTable() {
        this->TableName = L"DefaultGUISheet";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::DefaultGUISheetDataTable::DefaultGUISheetDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline NewDataSet::DefaultGUISheetDataTable::DefaultGUISheetDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultGUISheetDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultGUISheetDataTable::DefaultGUISheet_textColumn::get() {
        return this->columnDefaultGUISheet_text;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::DefaultGUISheetDataTable::CEGUIConfig_IdColumn::get() {
        return this->columnCEGUIConfig_Id;
    }
    
    inline ::System::Int32 NewDataSet::DefaultGUISheetDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::DefaultGUISheetRow^  NewDataSet::DefaultGUISheetDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::AddDefaultGUISheetRow(spaceShip1414::NewDataSet::DefaultGUISheetRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::DefaultGUISheetRow^  NewDataSet::DefaultGUISheetDataTable::AddDefaultGUISheetRow(System::String^  name, 
                System::String^  DefaultGUISheet_text, spaceShip1414::NewDataSet::CEGUIConfigRow^  parentCEGUIConfigRowByCEGUIConfig_DefaultGUISheet) {
        spaceShip1414::NewDataSet::DefaultGUISheetRow^  rowDefaultGUISheetRow = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {name, DefaultGUISheet_text, 
            nullptr};
        if (parentCEGUIConfigRowByCEGUIConfig_DefaultGUISheet != nullptr) {
            columnValuesArray[2] = parentCEGUIConfigRowByCEGUIConfig_DefaultGUISheet[0];
        }
        rowDefaultGUISheetRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowDefaultGUISheetRow);
        return rowDefaultGUISheetRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::DefaultGUISheetDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultGUISheetDataTable::Clone() {
        spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::DefaultGUISheetDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::DefaultGUISheetDataTable());
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnDefaultGUISheet_text = __super::Columns[L"DefaultGUISheet_text"];
        this->columnCEGUIConfig_Id = __super::Columns[L"CEGUIConfig_Id"];
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnDefaultGUISheet_text = (gcnew ::System::Data::DataColumn(L"DefaultGUISheet_text", ::System::String::typeid, nullptr, 
            ::System::Data::MappingType::SimpleContent));
        __super::Columns->Add(this->columnDefaultGUISheet_text);
        this->columnCEGUIConfig_Id = (gcnew ::System::Data::DataColumn(L"CEGUIConfig_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnCEGUIConfig_Id);
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnDefaultGUISheet_text->AllowDBNull = false;
    }
    
    inline spaceShip1414::NewDataSet::DefaultGUISheetRow^  NewDataSet::DefaultGUISheetDataTable::NewDefaultGUISheetRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::DefaultGUISheetDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::DefaultGUISheetRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::DefaultGUISheetDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::DefaultGUISheetRow::typeid;
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DefaultGUISheetRowChanged(this, (gcnew spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DefaultGUISheetRowChanging(this, (gcnew spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DefaultGUISheetRowDeleted(this, (gcnew spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DefaultGUISheetRowDeleting(this, (gcnew spaceShip1414::NewDataSet::DefaultGUISheetRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetDataTable::RemoveDefaultGUISheetRow(spaceShip1414::NewDataSet::DefaultGUISheetRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::DefaultGUISheetDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        spaceShip1414::NewDataSet^  ds = (gcnew spaceShip1414::NewDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DefaultGUISheetDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline NewDataSet::CEGUIConfigRow::CEGUIConfigRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableCEGUIConfig = (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigDataTable^  >(this->Table));
    }
    
    inline System::Int32 NewDataSet::CEGUIConfigRow::CEGUIConfig_Id::get() {
        return (cli::safe_cast<::System::Int32 >(this[this->tableCEGUIConfig->CEGUIConfig_IdColumn]));
    }
    inline System::Void NewDataSet::CEGUIConfigRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableCEGUIConfig->CEGUIConfig_IdColumn] = value;
    }
    
    inline cli::array< spaceShip1414::NewDataSet::LoggingRow^  >^  NewDataSet::CEGUIConfigRow::GetLoggingRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_Logging"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::LoggingRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::LoggingRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_Logging"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::AutoLoadRow^  >^  NewDataSet::CEGUIConfigRow::GetAutoLoadRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_AutoLoad"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::AutoLoadRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::AutoLoadRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_AutoLoad"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::ResourceDirectoryRow^  >^  NewDataSet::CEGUIConfigRow::GetResourceDirectoryRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_ResourceDirectory"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::ResourceDirectoryRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::ResourceDirectoryRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_ResourceDirectory"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultResourceGroupRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultResourceGroup"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultResourceGroupRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultResourceGroup"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::ScriptingRow^  >^  NewDataSet::CEGUIConfigRow::GetScriptingRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_Scripting"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::ScriptingRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::ScriptingRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_Scripting"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultXMLParserRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultXMLParserRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultXMLParser"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultXMLParserRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultXMLParserRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultXMLParser"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultImageCodecRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultImageCodecRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultImageCodec"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultImageCodecRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultImageCodecRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultImageCodec"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultFontRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultFontRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultFont"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultFontRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultFontRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultFont"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultMouseCursorRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultMouseCursor"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultMouseCursorRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultMouseCursor"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultTooltipRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultTooltipRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultTooltip"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultTooltipRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultTooltipRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultTooltip"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::DefaultGUISheetRow^  >^  NewDataSet::CEGUIConfigRow::GetDefaultGUISheetRows() {
        if (this->Table->ChildRelations[L"CEGUIConfig_DefaultGUISheet"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::DefaultGUISheetRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::DefaultGUISheetRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"CEGUIConfig_DefaultGUISheet"])));
        }
    }
    
    
    inline NewDataSet::LoggingRow::LoggingRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableLogging = (cli::safe_cast<spaceShip1414::NewDataSet::LoggingDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::LoggingRow::filename::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableLogging->filenameColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'filename\' de la tabla \'Logging\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::LoggingRow::filename::set(System::String^  value) {
        this[this->tableLogging->filenameColumn] = value;
    }
    
    inline System::String^  NewDataSet::LoggingRow::level::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableLogging->levelColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'level\' de la tabla \'Logging\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::LoggingRow::level::set(System::String^  value) {
        this[this->tableLogging->levelColumn] = value;
    }
    
    inline System::String^  NewDataSet::LoggingRow::Logging_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableLogging->Logging_textColumn]));
    }
    inline System::Void NewDataSet::LoggingRow::Logging_text::set(System::String^  value) {
        this[this->tableLogging->Logging_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::LoggingRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableLogging->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'Logging\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::LoggingRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableLogging->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::LoggingRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_Logging"])));
    }
    inline System::Void NewDataSet::LoggingRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_Logging"]);
    }
    
    inline ::System::Boolean NewDataSet::LoggingRow::IsfilenameNull() {
        return this->IsNull(this->tableLogging->filenameColumn);
    }
    
    inline ::System::Void NewDataSet::LoggingRow::SetfilenameNull() {
        this[this->tableLogging->filenameColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::LoggingRow::IslevelNull() {
        return this->IsNull(this->tableLogging->levelColumn);
    }
    
    inline ::System::Void NewDataSet::LoggingRow::SetlevelNull() {
        this[this->tableLogging->levelColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::LoggingRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableLogging->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::LoggingRow::SetCEGUIConfig_IdNull() {
        this[this->tableLogging->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::AutoLoadRow::AutoLoadRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableAutoLoad = (cli::safe_cast<spaceShip1414::NewDataSet::AutoLoadDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::AutoLoadRow::type::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableAutoLoad->typeColumn]));
    }
    inline System::Void NewDataSet::AutoLoadRow::type::set(System::String^  value) {
        this[this->tableAutoLoad->typeColumn] = value;
    }
    
    inline System::String^  NewDataSet::AutoLoadRow::group::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableAutoLoad->groupColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'group\' de la tabla \'AutoLoad\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::AutoLoadRow::group::set(System::String^  value) {
        this[this->tableAutoLoad->groupColumn] = value;
    }
    
    inline System::String^  NewDataSet::AutoLoadRow::pattern::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableAutoLoad->patternColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'pattern\' de la tabla \'AutoLoad\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::AutoLoadRow::pattern::set(System::String^  value) {
        this[this->tableAutoLoad->patternColumn] = value;
    }
    
    inline System::String^  NewDataSet::AutoLoadRow::AutoLoad_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableAutoLoad->AutoLoad_textColumn]));
    }
    inline System::Void NewDataSet::AutoLoadRow::AutoLoad_text::set(System::String^  value) {
        this[this->tableAutoLoad->AutoLoad_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::AutoLoadRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableAutoLoad->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'AutoLoad\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::AutoLoadRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableAutoLoad->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::AutoLoadRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_AutoLoad"])));
    }
    inline System::Void NewDataSet::AutoLoadRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_AutoLoad"]);
    }
    
    inline ::System::Boolean NewDataSet::AutoLoadRow::IsgroupNull() {
        return this->IsNull(this->tableAutoLoad->groupColumn);
    }
    
    inline ::System::Void NewDataSet::AutoLoadRow::SetgroupNull() {
        this[this->tableAutoLoad->groupColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::AutoLoadRow::IspatternNull() {
        return this->IsNull(this->tableAutoLoad->patternColumn);
    }
    
    inline ::System::Void NewDataSet::AutoLoadRow::SetpatternNull() {
        this[this->tableAutoLoad->patternColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::AutoLoadRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableAutoLoad->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::AutoLoadRow::SetCEGUIConfig_IdNull() {
        this[this->tableAutoLoad->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::ResourceDirectoryRow::ResourceDirectoryRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableResourceDirectory = (cli::safe_cast<spaceShip1414::NewDataSet::ResourceDirectoryDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::ResourceDirectoryRow::group::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableResourceDirectory->groupColumn]));
    }
    inline System::Void NewDataSet::ResourceDirectoryRow::group::set(System::String^  value) {
        this[this->tableResourceDirectory->groupColumn] = value;
    }
    
    inline System::String^  NewDataSet::ResourceDirectoryRow::directory::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableResourceDirectory->directoryColumn]));
    }
    inline System::Void NewDataSet::ResourceDirectoryRow::directory::set(System::String^  value) {
        this[this->tableResourceDirectory->directoryColumn] = value;
    }
    
    inline System::String^  NewDataSet::ResourceDirectoryRow::ResourceDirectory_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableResourceDirectory->ResourceDirectory_textColumn]));
    }
    inline System::Void NewDataSet::ResourceDirectoryRow::ResourceDirectory_text::set(System::String^  value) {
        this[this->tableResourceDirectory->ResourceDirectory_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::ResourceDirectoryRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableResourceDirectory->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'ResourceDirectory\' es DBNull" 
L".", 
                e));
        }
    }
    inline System::Void NewDataSet::ResourceDirectoryRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableResourceDirectory->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::ResourceDirectoryRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_ResourceDirectory"])));
    }
    inline System::Void NewDataSet::ResourceDirectoryRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_ResourceDirectory"]);
    }
    
    inline ::System::Boolean NewDataSet::ResourceDirectoryRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableResourceDirectory->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::ResourceDirectoryRow::SetCEGUIConfig_IdNull() {
        this[this->tableResourceDirectory->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultResourceGroupRow::DefaultResourceGroupRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultResourceGroup = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultResourceGroupDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultResourceGroupRow::type::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableDefaultResourceGroup->typeColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'type\' de la tabla \'DefaultResourceGroup\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultResourceGroupRow::type::set(System::String^  value) {
        this[this->tableDefaultResourceGroup->typeColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultResourceGroupRow::group::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultResourceGroup->groupColumn]));
    }
    inline System::Void NewDataSet::DefaultResourceGroupRow::group::set(System::String^  value) {
        this[this->tableDefaultResourceGroup->groupColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultResourceGroupRow::DefaultResourceGroup_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultResourceGroup->DefaultResourceGroup_textColumn]));
    }
    inline System::Void NewDataSet::DefaultResourceGroupRow::DefaultResourceGroup_text::set(System::String^  value) {
        this[this->tableDefaultResourceGroup->DefaultResourceGroup_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultResourceGroupRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultResourceGroup->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultResourceGroup\' es DBN" 
L"ull.", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultResourceGroupRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultResourceGroup->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultResourceGroupRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultResourceGroup"])));
    }
    inline System::Void NewDataSet::DefaultResourceGroupRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultResourceGroup"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultResourceGroupRow::IstypeNull() {
        return this->IsNull(this->tableDefaultResourceGroup->typeColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupRow::SettypeNull() {
        this[this->tableDefaultResourceGroup->typeColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::DefaultResourceGroupRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultResourceGroup->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultResourceGroupRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultResourceGroup->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::ScriptingRow::ScriptingRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableScripting = (cli::safe_cast<spaceShip1414::NewDataSet::ScriptingDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::ScriptingRow::initScript::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableScripting->initScriptColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'initScript\' de la tabla \'Scripting\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::ScriptingRow::initScript::set(System::String^  value) {
        this[this->tableScripting->initScriptColumn] = value;
    }
    
    inline System::String^  NewDataSet::ScriptingRow::terminateScript::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableScripting->terminateScriptColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'terminateScript\' de la tabla \'Scripting\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::ScriptingRow::terminateScript::set(System::String^  value) {
        this[this->tableScripting->terminateScriptColumn] = value;
    }
    
    inline System::String^  NewDataSet::ScriptingRow::Scripting_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableScripting->Scripting_textColumn]));
    }
    inline System::Void NewDataSet::ScriptingRow::Scripting_text::set(System::String^  value) {
        this[this->tableScripting->Scripting_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::ScriptingRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableScripting->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'Scripting\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::ScriptingRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableScripting->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::ScriptingRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_Scripting"])));
    }
    inline System::Void NewDataSet::ScriptingRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_Scripting"]);
    }
    
    inline ::System::Boolean NewDataSet::ScriptingRow::IsinitScriptNull() {
        return this->IsNull(this->tableScripting->initScriptColumn);
    }
    
    inline ::System::Void NewDataSet::ScriptingRow::SetinitScriptNull() {
        this[this->tableScripting->initScriptColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::ScriptingRow::IsterminateScriptNull() {
        return this->IsNull(this->tableScripting->terminateScriptColumn);
    }
    
    inline ::System::Void NewDataSet::ScriptingRow::SetterminateScriptNull() {
        this[this->tableScripting->terminateScriptColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::ScriptingRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableScripting->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::ScriptingRow::SetCEGUIConfig_IdNull() {
        this[this->tableScripting->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultXMLParserRow::DefaultXMLParserRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultXMLParser = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultXMLParserDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultXMLParserRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultXMLParser->nameColumn]));
    }
    inline System::Void NewDataSet::DefaultXMLParserRow::name::set(System::String^  value) {
        this[this->tableDefaultXMLParser->nameColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultXMLParserRow::DefaultXMLParser_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultXMLParser->DefaultXMLParser_textColumn]));
    }
    inline System::Void NewDataSet::DefaultXMLParserRow::DefaultXMLParser_text::set(System::String^  value) {
        this[this->tableDefaultXMLParser->DefaultXMLParser_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultXMLParserRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultXMLParser->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultXMLParser\' es DBNull." 
L"", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultXMLParserRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultXMLParser->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultXMLParserRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultXMLParser"])));
    }
    inline System::Void NewDataSet::DefaultXMLParserRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultXMLParser"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultXMLParserRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultXMLParser->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultXMLParserRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultXMLParser->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultImageCodecRow::DefaultImageCodecRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultImageCodec = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultImageCodecDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultImageCodecRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultImageCodec->nameColumn]));
    }
    inline System::Void NewDataSet::DefaultImageCodecRow::name::set(System::String^  value) {
        this[this->tableDefaultImageCodec->nameColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultImageCodecRow::DefaultImageCodec_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultImageCodec->DefaultImageCodec_textColumn]));
    }
    inline System::Void NewDataSet::DefaultImageCodecRow::DefaultImageCodec_text::set(System::String^  value) {
        this[this->tableDefaultImageCodec->DefaultImageCodec_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultImageCodecRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultImageCodec->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultImageCodec\' es DBNull" 
L".", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultImageCodecRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultImageCodec->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultImageCodecRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultImageCodec"])));
    }
    inline System::Void NewDataSet::DefaultImageCodecRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultImageCodec"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultImageCodecRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultImageCodec->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultImageCodecRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultImageCodec->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultFontRow::DefaultFontRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultFont = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultFontDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultFontRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultFont->nameColumn]));
    }
    inline System::Void NewDataSet::DefaultFontRow::name::set(System::String^  value) {
        this[this->tableDefaultFont->nameColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultFontRow::DefaultFont_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultFont->DefaultFont_textColumn]));
    }
    inline System::Void NewDataSet::DefaultFontRow::DefaultFont_text::set(System::String^  value) {
        this[this->tableDefaultFont->DefaultFont_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultFontRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultFont->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultFont\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultFontRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultFont->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultFontRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultFont"])));
    }
    inline System::Void NewDataSet::DefaultFontRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultFont"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultFontRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultFont->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultFontRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultFont->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultMouseCursorRow::DefaultMouseCursorRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultMouseCursor = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultMouseCursorDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultMouseCursorRow::imageset::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultMouseCursor->imagesetColumn]));
    }
    inline System::Void NewDataSet::DefaultMouseCursorRow::imageset::set(System::String^  value) {
        this[this->tableDefaultMouseCursor->imagesetColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultMouseCursorRow::image::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultMouseCursor->imageColumn]));
    }
    inline System::Void NewDataSet::DefaultMouseCursorRow::image::set(System::String^  value) {
        this[this->tableDefaultMouseCursor->imageColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultMouseCursorRow::DefaultMouseCursor_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultMouseCursor->DefaultMouseCursor_textColumn]));
    }
    inline System::Void NewDataSet::DefaultMouseCursorRow::DefaultMouseCursor_text::set(System::String^  value) {
        this[this->tableDefaultMouseCursor->DefaultMouseCursor_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultMouseCursorRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultMouseCursor->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultMouseCursor\' es DBNul" 
L"l.", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultMouseCursorRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultMouseCursor->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultMouseCursorRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultMouseCursor"])));
    }
    inline System::Void NewDataSet::DefaultMouseCursorRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultMouseCursor"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultMouseCursorRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultMouseCursor->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultMouseCursorRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultMouseCursor->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultTooltipRow::DefaultTooltipRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultTooltip = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultTooltipDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultTooltipRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultTooltip->nameColumn]));
    }
    inline System::Void NewDataSet::DefaultTooltipRow::name::set(System::String^  value) {
        this[this->tableDefaultTooltip->nameColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultTooltipRow::DefaultTooltip_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultTooltip->DefaultTooltip_textColumn]));
    }
    inline System::Void NewDataSet::DefaultTooltipRow::DefaultTooltip_text::set(System::String^  value) {
        this[this->tableDefaultTooltip->DefaultTooltip_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultTooltipRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultTooltip->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultTooltip\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultTooltipRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultTooltip->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultTooltipRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultTooltip"])));
    }
    inline System::Void NewDataSet::DefaultTooltipRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultTooltip"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultTooltipRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultTooltip->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultTooltipRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultTooltip->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::DefaultGUISheetRow::DefaultGUISheetRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDefaultGUISheet = (cli::safe_cast<spaceShip1414::NewDataSet::DefaultGUISheetDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::DefaultGUISheetRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultGUISheet->nameColumn]));
    }
    inline System::Void NewDataSet::DefaultGUISheetRow::name::set(System::String^  value) {
        this[this->tableDefaultGUISheet->nameColumn] = value;
    }
    
    inline System::String^  NewDataSet::DefaultGUISheetRow::DefaultGUISheet_text::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableDefaultGUISheet->DefaultGUISheet_textColumn]));
    }
    inline System::Void NewDataSet::DefaultGUISheetRow::DefaultGUISheet_text::set(System::String^  value) {
        this[this->tableDefaultGUISheet->DefaultGUISheet_textColumn] = value;
    }
    
    inline System::Int32 NewDataSet::DefaultGUISheetRow::CEGUIConfig_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDefaultGUISheet->CEGUIConfig_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'CEGUIConfig_Id\' de la tabla \'DefaultGUISheet\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::DefaultGUISheetRow::CEGUIConfig_Id::set(System::Int32 value) {
        this[this->tableDefaultGUISheet->CEGUIConfig_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::DefaultGUISheetRow::CEGUIConfigRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::CEGUIConfigRow^  >(this->GetParentRow(this->Table->ParentRelations[L"CEGUIConfig_DefaultGUISheet"])));
    }
    inline System::Void NewDataSet::DefaultGUISheetRow::CEGUIConfigRow::set(spaceShip1414::NewDataSet::CEGUIConfigRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"CEGUIConfig_DefaultGUISheet"]);
    }
    
    inline ::System::Boolean NewDataSet::DefaultGUISheetRow::IsCEGUIConfig_IdNull() {
        return this->IsNull(this->tableDefaultGUISheet->CEGUIConfig_IdColumn);
    }
    
    inline ::System::Void NewDataSet::DefaultGUISheetRow::SetCEGUIConfig_IdNull() {
        this[this->tableDefaultGUISheet->CEGUIConfig_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::CEGUIConfigRowChangeEvent::CEGUIConfigRowChangeEvent(spaceShip1414::NewDataSet::CEGUIConfigRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::CEGUIConfigRow^  NewDataSet::CEGUIConfigRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::CEGUIConfigRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::LoggingRowChangeEvent::LoggingRowChangeEvent(spaceShip1414::NewDataSet::LoggingRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::LoggingRow^  NewDataSet::LoggingRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::LoggingRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::AutoLoadRowChangeEvent::AutoLoadRowChangeEvent(spaceShip1414::NewDataSet::AutoLoadRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::AutoLoadRow^  NewDataSet::AutoLoadRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::AutoLoadRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::ResourceDirectoryRowChangeEvent::ResourceDirectoryRowChangeEvent(spaceShip1414::NewDataSet::ResourceDirectoryRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::ResourceDirectoryRow^  NewDataSet::ResourceDirectoryRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::ResourceDirectoryRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultResourceGroupRowChangeEvent::DefaultResourceGroupRowChangeEvent(spaceShip1414::NewDataSet::DefaultResourceGroupRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultResourceGroupRow^  NewDataSet::DefaultResourceGroupRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultResourceGroupRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::ScriptingRowChangeEvent::ScriptingRowChangeEvent(spaceShip1414::NewDataSet::ScriptingRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::ScriptingRow^  NewDataSet::ScriptingRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::ScriptingRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultXMLParserRowChangeEvent::DefaultXMLParserRowChangeEvent(spaceShip1414::NewDataSet::DefaultXMLParserRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultXMLParserRow^  NewDataSet::DefaultXMLParserRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultXMLParserRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultImageCodecRowChangeEvent::DefaultImageCodecRowChangeEvent(spaceShip1414::NewDataSet::DefaultImageCodecRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultImageCodecRow^  NewDataSet::DefaultImageCodecRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultImageCodecRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultFontRowChangeEvent::DefaultFontRowChangeEvent(spaceShip1414::NewDataSet::DefaultFontRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultFontRow^  NewDataSet::DefaultFontRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultFontRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultMouseCursorRowChangeEvent::DefaultMouseCursorRowChangeEvent(spaceShip1414::NewDataSet::DefaultMouseCursorRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultMouseCursorRow^  NewDataSet::DefaultMouseCursorRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultMouseCursorRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultTooltipRowChangeEvent::DefaultTooltipRowChangeEvent(spaceShip1414::NewDataSet::DefaultTooltipRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultTooltipRow^  NewDataSet::DefaultTooltipRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultTooltipRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::DefaultGUISheetRowChangeEvent::DefaultGUISheetRowChangeEvent(spaceShip1414::NewDataSet::DefaultGUISheetRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::DefaultGUISheetRow^  NewDataSet::DefaultGUISheetRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::DefaultGUISheetRowChangeEvent::Action::get() {
        return this->eventAction;
    }
}
