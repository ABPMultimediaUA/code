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
        public : ref class FontDataTable;
        public : ref class MappingDataTable;
        public : ref class FontRow;
        public : ref class MappingRow;
        public : ref class FontRowChangeEvent;
        public : ref class MappingRowChangeEvent;
        
        private: spaceShip1414::NewDataSet::FontDataTable^  tableFont;
        
        private: spaceShip1414::NewDataSet::MappingDataTable^  tableMapping;
        
        private: ::System::Data::DataRelation^  relationFont_Mapping;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void FontRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::FontRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void MappingRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::MappingRowChangeEvent^  e);
        
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
        property spaceShip1414::NewDataSet::FontDataTable^  Font {
            spaceShip1414::NewDataSet::FontDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::MappingDataTable^  Mapping {
            spaceShip1414::NewDataSet::MappingDataTable^  get();
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
        ::System::Boolean ShouldSerializeFont();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeMapping();
        
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
        ref class FontDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnfilename;
            
            private: ::System::Data::DataColumn^  columnresourceGroup;
            
            private: ::System::Data::DataColumn^  columntype;
            
            private: ::System::Data::DataColumn^  columnsize;
            
            private: ::System::Data::DataColumn^  columnnativeHorzRes;
            
            private: ::System::Data::DataColumn^  columnnativeVertRes;
            
            private: ::System::Data::DataColumn^  columnautoScaled;
            
            private: ::System::Data::DataColumn^  columnantiAlias;
            
            private: ::System::Data::DataColumn^  columnlineSpacing;
            
            private: ::System::Data::DataColumn^  columnversion;
            
            private: ::System::Data::DataColumn^  columnFont_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::FontRowChangeEventHandler^  FontRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::FontRowChangeEventHandler^  FontRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::FontRowChangeEventHandler^  FontRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::FontRowChangeEventHandler^  FontRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            FontDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            FontDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            FontDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  filenameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  resourceGroupColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  typeColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  sizeColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nativeHorzResColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nativeVertResColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  autoScaledColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  antiAliasColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  lineSpacingColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  versionColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Font_IdColumn {
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
            property spaceShip1414::NewDataSet::FontRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::FontRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddFontRow(spaceShip1414::NewDataSet::FontRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::FontRow^  AddFontRow(
                        System::String^  name, 
                        System::String^  filename, 
                        System::String^  resourceGroup, 
                        System::String^  type, 
                        System::UInt64 size, 
                        System::UInt64 nativeHorzRes, 
                        System::UInt64 nativeVertRes, 
                        System::String^  autoScaled, 
                        System::Boolean antiAlias, 
                        System::Decimal lineSpacing, 
                        System::UInt64 version);
            
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
            spaceShip1414::NewDataSet::FontRow^  NewFontRow();
            
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
            ::System::Void RemoveFontRow(spaceShip1414::NewDataSet::FontRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class MappingDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columncodepoint;
            
            private: ::System::Data::DataColumn^  columnimage;
            
            private: ::System::Data::DataColumn^  columnhorzAdvance;
            
            private: ::System::Data::DataColumn^  columnFont_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::MappingRowChangeEventHandler^  MappingRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::MappingRowChangeEventHandler^  MappingRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::MappingRowChangeEventHandler^  MappingRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::MappingRowChangeEventHandler^  MappingRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MappingDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MappingDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MappingDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  codepointColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  imageColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  horzAdvanceColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Font_IdColumn {
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
            property spaceShip1414::NewDataSet::MappingRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::MappingRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddMappingRow(spaceShip1414::NewDataSet::MappingRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::MappingRow^  AddMappingRow(System::UInt64 codepoint, System::String^  image, System::Int64 horzAdvance, 
                        spaceShip1414::NewDataSet::FontRow^  parentFontRowByFont_Mapping);
            
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
            spaceShip1414::NewDataSet::MappingRow^  NewMappingRow();
            
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
            ::System::Void RemoveMappingRow(spaceShip1414::NewDataSet::MappingRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class FontRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::FontDataTable^  tableFont;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            FontRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  filename {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  resourceGroup {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  type {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::UInt64 size {
                System::UInt64 get();
                System::Void set(System::UInt64 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::UInt64 nativeHorzRes {
                System::UInt64 get();
                System::Void set(System::UInt64 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::UInt64 nativeVertRes {
                System::UInt64 get();
                System::Void set(System::UInt64 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  autoScaled {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Boolean antiAlias {
                System::Boolean get();
                System::Void set(System::Boolean value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Decimal lineSpacing {
                System::Decimal get();
                System::Void set(System::Decimal value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::UInt64 version {
                System::UInt64 get();
                System::Void set(System::UInt64 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 Font_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsresourceGroupNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetresourceGroupNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IssizeNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetsizeNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsnativeHorzResNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetnativeHorzResNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsnativeVertResNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetnativeVertResNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsautoScaledNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetautoScaledNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsantiAliasNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetantiAliasNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IslineSpacingNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetlineSpacingNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsversionNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetversionNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::MappingRow^  >^  GetMappingRows();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class MappingRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::MappingDataTable^  tableMapping;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MappingRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::UInt64 codepoint {
                System::UInt64 get();
                System::Void set(System::UInt64 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  image {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int64 horzAdvance {
                System::Int64 get();
                System::Void set(System::Int64 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 Font_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::FontRow^  FontRow {
                spaceShip1414::NewDataSet::FontRow^  get();
                System::Void set(spaceShip1414::NewDataSet::FontRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IshorzAdvanceNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SethorzAdvanceNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsFont_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetFont_IdNull();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class FontRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::FontRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            FontRowChangeEvent(spaceShip1414::NewDataSet::FontRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::FontRow^  Row {
                spaceShip1414::NewDataSet::FontRow^  get();
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
        ref class MappingRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::MappingRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MappingRowChangeEvent(spaceShip1414::NewDataSet::MappingRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::MappingRow^  Row {
                spaceShip1414::NewDataSet::MappingRow^  get();
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
            if (ds->Tables[L"Font"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::FontDataTable(ds->Tables[L"Font"])));
            }
            if (ds->Tables[L"Mapping"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::MappingDataTable(ds->Tables[L"Mapping"])));
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
    
    inline spaceShip1414::NewDataSet::FontDataTable^  NewDataSet::Font::get() {
        return this->tableFont;
    }
    
    inline spaceShip1414::NewDataSet::MappingDataTable^  NewDataSet::Mapping::get() {
        return this->tableMapping;
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
            if (ds->Tables[L"Font"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::FontDataTable(ds->Tables[L"Font"])));
            }
            if (ds->Tables[L"Mapping"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::MappingDataTable(ds->Tables[L"Mapping"])));
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
        this->tableFont = (cli::safe_cast<spaceShip1414::NewDataSet::FontDataTable^  >(__super::Tables[L"Font"]));
        if (initTable == true) {
            if (this->tableFont != nullptr) {
                this->tableFont->InitVars();
            }
        }
        this->tableMapping = (cli::safe_cast<spaceShip1414::NewDataSet::MappingDataTable^  >(__super::Tables[L"Mapping"]));
        if (initTable == true) {
            if (this->tableMapping != nullptr) {
                this->tableMapping->InitVars();
            }
        }
        this->relationFont_Mapping = this->Relations[L"Font_Mapping"];
    }
    
    inline ::System::Void NewDataSet::InitClass() {
        this->DataSetName = L"NewDataSet";
        this->Prefix = L"";
        this->Locale = (gcnew ::System::Globalization::CultureInfo(L""));
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableFont = (gcnew spaceShip1414::NewDataSet::FontDataTable());
        __super::Tables->Add(this->tableFont);
        this->tableMapping = (gcnew spaceShip1414::NewDataSet::MappingDataTable());
        __super::Tables->Add(this->tableMapping);
        ::System::Data::ForeignKeyConstraint^  fkc;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"Font_Mapping", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableFont->Font_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableMapping->Font_IdColumn}));
        this->tableMapping->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        this->relationFont_Mapping = (gcnew ::System::Data::DataRelation(L"Font_Mapping", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableFont->Font_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableMapping->Font_IdColumn}, false));
        this->relationFont_Mapping->Nested = true;
        this->Relations->Add(this->relationFont_Mapping);
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeFont() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeMapping() {
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
    
    
    inline NewDataSet::FontDataTable::FontDataTable() {
        this->TableName = L"Font";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::FontDataTable::FontDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::FontDataTable::FontDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::filenameColumn::get() {
        return this->columnfilename;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::resourceGroupColumn::get() {
        return this->columnresourceGroup;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::typeColumn::get() {
        return this->columntype;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::sizeColumn::get() {
        return this->columnsize;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::nativeHorzResColumn::get() {
        return this->columnnativeHorzRes;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::nativeVertResColumn::get() {
        return this->columnnativeVertRes;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::autoScaledColumn::get() {
        return this->columnautoScaled;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::antiAliasColumn::get() {
        return this->columnantiAlias;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::lineSpacingColumn::get() {
        return this->columnlineSpacing;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::versionColumn::get() {
        return this->columnversion;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::FontDataTable::Font_IdColumn::get() {
        return this->columnFont_Id;
    }
    
    inline ::System::Int32 NewDataSet::FontDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::FontRow^  NewDataSet::FontDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::FontDataTable::AddFontRow(spaceShip1414::NewDataSet::FontRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::FontRow^  NewDataSet::FontDataTable::AddFontRow(
                System::String^  name, 
                System::String^  filename, 
                System::String^  resourceGroup, 
                System::String^  type, 
                System::UInt64 size, 
                System::UInt64 nativeHorzRes, 
                System::UInt64 nativeVertRes, 
                System::String^  autoScaled, 
                System::Boolean antiAlias, 
                System::Decimal lineSpacing, 
                System::UInt64 version) {
        spaceShip1414::NewDataSet::FontRow^  rowFontRow = (cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(12) {name, filename, resourceGroup, 
            type, size, nativeHorzRes, nativeVertRes, autoScaled, antiAlias, lineSpacing, version, nullptr};
        rowFontRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowFontRow);
        return rowFontRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::FontDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::FontDataTable::Clone() {
        spaceShip1414::NewDataSet::FontDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::FontDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::FontDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::FontDataTable());
    }
    
    inline ::System::Void NewDataSet::FontDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnfilename = __super::Columns[L"filename"];
        this->columnresourceGroup = __super::Columns[L"resourceGroup"];
        this->columntype = __super::Columns[L"type"];
        this->columnsize = __super::Columns[L"size"];
        this->columnnativeHorzRes = __super::Columns[L"nativeHorzRes"];
        this->columnnativeVertRes = __super::Columns[L"nativeVertRes"];
        this->columnautoScaled = __super::Columns[L"autoScaled"];
        this->columnantiAlias = __super::Columns[L"antiAlias"];
        this->columnlineSpacing = __super::Columns[L"lineSpacing"];
        this->columnversion = __super::Columns[L"version"];
        this->columnFont_Id = __super::Columns[L"Font_Id"];
    }
    
    inline ::System::Void NewDataSet::FontDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnfilename = (gcnew ::System::Data::DataColumn(L"filename", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnfilename);
        this->columnresourceGroup = (gcnew ::System::Data::DataColumn(L"resourceGroup", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnresourceGroup);
        this->columntype = (gcnew ::System::Data::DataColumn(L"type", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columntype);
        this->columnsize = (gcnew ::System::Data::DataColumn(L"size", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnsize);
        this->columnnativeHorzRes = (gcnew ::System::Data::DataColumn(L"nativeHorzRes", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnnativeHorzRes);
        this->columnnativeVertRes = (gcnew ::System::Data::DataColumn(L"nativeVertRes", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnnativeVertRes);
        this->columnautoScaled = (gcnew ::System::Data::DataColumn(L"autoScaled", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnautoScaled);
        this->columnantiAlias = (gcnew ::System::Data::DataColumn(L"antiAlias", ::System::Boolean::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnantiAlias);
        this->columnlineSpacing = (gcnew ::System::Data::DataColumn(L"lineSpacing", ::System::Decimal::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnlineSpacing);
        this->columnversion = (gcnew ::System::Data::DataColumn(L"version", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnversion);
        this->columnFont_Id = (gcnew ::System::Data::DataColumn(L"Font_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnFont_Id);
        this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnFont_Id}, 
                true)));
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnfilename->AllowDBNull = false;
        this->columnfilename->Namespace = L"";
        this->columnresourceGroup->Namespace = L"";
        this->columnresourceGroup->DefaultValue = (cli::safe_cast<System::String^  >(L""));
        this->columntype->AllowDBNull = false;
        this->columntype->Namespace = L"";
        this->columnsize->Namespace = L"";
        this->columnsize->DefaultValue = static_cast<System::UInt64>(12);
        this->columnnativeHorzRes->Namespace = L"";
        this->columnnativeHorzRes->DefaultValue = static_cast<System::UInt64>(640);
        this->columnnativeVertRes->Namespace = L"";
        this->columnnativeVertRes->DefaultValue = static_cast<System::UInt64>(480);
        this->columnautoScaled->Namespace = L"";
        this->columnautoScaled->DefaultValue = (cli::safe_cast<System::String^  >(L"false"));
        this->columnantiAlias->Namespace = L"";
        this->columnantiAlias->DefaultValue = static_cast<System::Boolean>(true);
        this->columnlineSpacing->Namespace = L"";
        this->columnlineSpacing->DefaultValue = static_cast<System::Decimal>(0);
        this->columnversion->Namespace = L"";
        this->columnversion->DefaultValue = static_cast<System::UInt64>(0);
        this->columnFont_Id->AutoIncrement = true;
        this->columnFont_Id->AllowDBNull = false;
        this->columnFont_Id->Unique = true;
    }
    
    inline spaceShip1414::NewDataSet::FontRow^  NewDataSet::FontDataTable::NewFontRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::FontDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::FontRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::FontDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::FontRow::typeid;
    }
    
    inline ::System::Void NewDataSet::FontDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->FontRowChanged(this, (gcnew spaceShip1414::NewDataSet::FontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::FontDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->FontRowChanging(this, (gcnew spaceShip1414::NewDataSet::FontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::FontDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->FontRowDeleted(this, (gcnew spaceShip1414::NewDataSet::FontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::FontDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->FontRowDeleting(this, (gcnew spaceShip1414::NewDataSet::FontRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::FontDataTable::RemoveFontRow(spaceShip1414::NewDataSet::FontRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::FontDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"FontDataTable";
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
    
    
    inline NewDataSet::MappingDataTable::MappingDataTable() {
        this->TableName = L"Mapping";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::MappingDataTable::MappingDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::MappingDataTable::MappingDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::MappingDataTable::codepointColumn::get() {
        return this->columncodepoint;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::MappingDataTable::imageColumn::get() {
        return this->columnimage;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::MappingDataTable::horzAdvanceColumn::get() {
        return this->columnhorzAdvance;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::MappingDataTable::Font_IdColumn::get() {
        return this->columnFont_Id;
    }
    
    inline ::System::Int32 NewDataSet::MappingDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::MappingRow^  NewDataSet::MappingDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::AddMappingRow(spaceShip1414::NewDataSet::MappingRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::MappingRow^  NewDataSet::MappingDataTable::AddMappingRow(System::UInt64 codepoint, 
                System::String^  image, System::Int64 horzAdvance, spaceShip1414::NewDataSet::FontRow^  parentFontRowByFont_Mapping) {
        spaceShip1414::NewDataSet::MappingRow^  rowMappingRow = (cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {codepoint, image, horzAdvance, 
            nullptr};
        if (parentFontRowByFont_Mapping != nullptr) {
            columnValuesArray[3] = parentFontRowByFont_Mapping[11];
        }
        rowMappingRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowMappingRow);
        return rowMappingRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::MappingDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::MappingDataTable::Clone() {
        spaceShip1414::NewDataSet::MappingDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::MappingDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::MappingDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::MappingDataTable());
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::InitVars() {
        this->columncodepoint = __super::Columns[L"codepoint"];
        this->columnimage = __super::Columns[L"image"];
        this->columnhorzAdvance = __super::Columns[L"horzAdvance"];
        this->columnFont_Id = __super::Columns[L"Font_Id"];
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::InitClass() {
        this->columncodepoint = (gcnew ::System::Data::DataColumn(L"codepoint", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columncodepoint);
        this->columnimage = (gcnew ::System::Data::DataColumn(L"image", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnimage);
        this->columnhorzAdvance = (gcnew ::System::Data::DataColumn(L"horzAdvance", ::System::Int64::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnhorzAdvance);
        this->columnFont_Id = (gcnew ::System::Data::DataColumn(L"Font_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnFont_Id);
        this->columncodepoint->AllowDBNull = false;
        this->columncodepoint->Namespace = L"";
        this->columnimage->AllowDBNull = false;
        this->columnimage->Namespace = L"";
        this->columnhorzAdvance->Namespace = L"";
        this->columnhorzAdvance->DefaultValue = static_cast<System::Int64>(-1);
    }
    
    inline spaceShip1414::NewDataSet::MappingRow^  NewDataSet::MappingDataTable::NewMappingRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::MappingDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::MappingRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::MappingDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::MappingRow::typeid;
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->MappingRowChanged(this, (gcnew spaceShip1414::NewDataSet::MappingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->MappingRowChanging(this, (gcnew spaceShip1414::NewDataSet::MappingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->MappingRowDeleted(this, (gcnew spaceShip1414::NewDataSet::MappingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->MappingRowDeleting(this, (gcnew spaceShip1414::NewDataSet::MappingRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::MappingRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::MappingDataTable::RemoveMappingRow(spaceShip1414::NewDataSet::MappingRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::MappingDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"MappingDataTable";
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
    
    
    inline NewDataSet::FontRow::FontRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableFont = (cli::safe_cast<spaceShip1414::NewDataSet::FontDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::FontRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableFont->nameColumn]));
    }
    inline System::Void NewDataSet::FontRow::name::set(System::String^  value) {
        this[this->tableFont->nameColumn] = value;
    }
    
    inline System::String^  NewDataSet::FontRow::filename::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableFont->filenameColumn]));
    }
    inline System::Void NewDataSet::FontRow::filename::set(System::String^  value) {
        this[this->tableFont->filenameColumn] = value;
    }
    
    inline System::String^  NewDataSet::FontRow::resourceGroup::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableFont->resourceGroupColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'resourceGroup\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::resourceGroup::set(System::String^  value) {
        this[this->tableFont->resourceGroupColumn] = value;
    }
    
    inline System::String^  NewDataSet::FontRow::type::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableFont->typeColumn]));
    }
    inline System::Void NewDataSet::FontRow::type::set(System::String^  value) {
        this[this->tableFont->typeColumn] = value;
    }
    
    inline System::UInt64 NewDataSet::FontRow::size::get() {
        try {
            return (cli::safe_cast<::System::UInt64 >(this[this->tableFont->sizeColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'size\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::size::set(System::UInt64 value) {
        this[this->tableFont->sizeColumn] = value;
    }
    
    inline System::UInt64 NewDataSet::FontRow::nativeHorzRes::get() {
        try {
            return (cli::safe_cast<::System::UInt64 >(this[this->tableFont->nativeHorzResColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'nativeHorzRes\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::nativeHorzRes::set(System::UInt64 value) {
        this[this->tableFont->nativeHorzResColumn] = value;
    }
    
    inline System::UInt64 NewDataSet::FontRow::nativeVertRes::get() {
        try {
            return (cli::safe_cast<::System::UInt64 >(this[this->tableFont->nativeVertResColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'nativeVertRes\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::nativeVertRes::set(System::UInt64 value) {
        this[this->tableFont->nativeVertResColumn] = value;
    }
    
    inline System::String^  NewDataSet::FontRow::autoScaled::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableFont->autoScaledColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'autoScaled\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::autoScaled::set(System::String^  value) {
        this[this->tableFont->autoScaledColumn] = value;
    }
    
    inline System::Boolean NewDataSet::FontRow::antiAlias::get() {
        try {
            return (cli::safe_cast<::System::Boolean >(this[this->tableFont->antiAliasColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'antiAlias\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::antiAlias::set(System::Boolean value) {
        this[this->tableFont->antiAliasColumn] = value;
    }
    
    inline System::Decimal NewDataSet::FontRow::lineSpacing::get() {
        try {
            return (cli::safe_cast<::System::Decimal >(this[this->tableFont->lineSpacingColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'lineSpacing\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::lineSpacing::set(System::Decimal value) {
        this[this->tableFont->lineSpacingColumn] = value;
    }
    
    inline System::UInt64 NewDataSet::FontRow::version::get() {
        try {
            return (cli::safe_cast<::System::UInt64 >(this[this->tableFont->versionColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'version\' de la tabla \'Font\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::FontRow::version::set(System::UInt64 value) {
        this[this->tableFont->versionColumn] = value;
    }
    
    inline System::Int32 NewDataSet::FontRow::Font_Id::get() {
        return (cli::safe_cast<::System::Int32 >(this[this->tableFont->Font_IdColumn]));
    }
    inline System::Void NewDataSet::FontRow::Font_Id::set(System::Int32 value) {
        this[this->tableFont->Font_IdColumn] = value;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IsresourceGroupNull() {
        return this->IsNull(this->tableFont->resourceGroupColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetresourceGroupNull() {
        this[this->tableFont->resourceGroupColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IssizeNull() {
        return this->IsNull(this->tableFont->sizeColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetsizeNull() {
        this[this->tableFont->sizeColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IsnativeHorzResNull() {
        return this->IsNull(this->tableFont->nativeHorzResColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetnativeHorzResNull() {
        this[this->tableFont->nativeHorzResColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IsnativeVertResNull() {
        return this->IsNull(this->tableFont->nativeVertResColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetnativeVertResNull() {
        this[this->tableFont->nativeVertResColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IsautoScaledNull() {
        return this->IsNull(this->tableFont->autoScaledColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetautoScaledNull() {
        this[this->tableFont->autoScaledColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IsantiAliasNull() {
        return this->IsNull(this->tableFont->antiAliasColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetantiAliasNull() {
        this[this->tableFont->antiAliasColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IslineSpacingNull() {
        return this->IsNull(this->tableFont->lineSpacingColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetlineSpacingNull() {
        this[this->tableFont->lineSpacingColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::FontRow::IsversionNull() {
        return this->IsNull(this->tableFont->versionColumn);
    }
    
    inline ::System::Void NewDataSet::FontRow::SetversionNull() {
        this[this->tableFont->versionColumn] = ::System::Convert::DBNull;
    }
    
    inline cli::array< spaceShip1414::NewDataSet::MappingRow^  >^  NewDataSet::FontRow::GetMappingRows() {
        if (this->Table->ChildRelations[L"Font_Mapping"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::MappingRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::MappingRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"Font_Mapping"])));
        }
    }
    
    
    inline NewDataSet::MappingRow::MappingRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableMapping = (cli::safe_cast<spaceShip1414::NewDataSet::MappingDataTable^  >(this->Table));
    }
    
    inline System::UInt64 NewDataSet::MappingRow::codepoint::get() {
        return (cli::safe_cast<::System::UInt64 >(this[this->tableMapping->codepointColumn]));
    }
    inline System::Void NewDataSet::MappingRow::codepoint::set(System::UInt64 value) {
        this[this->tableMapping->codepointColumn] = value;
    }
    
    inline System::String^  NewDataSet::MappingRow::image::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableMapping->imageColumn]));
    }
    inline System::Void NewDataSet::MappingRow::image::set(System::String^  value) {
        this[this->tableMapping->imageColumn] = value;
    }
    
    inline System::Int64 NewDataSet::MappingRow::horzAdvance::get() {
        try {
            return (cli::safe_cast<::System::Int64 >(this[this->tableMapping->horzAdvanceColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'horzAdvance\' de la tabla \'Mapping\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::MappingRow::horzAdvance::set(System::Int64 value) {
        this[this->tableMapping->horzAdvanceColumn] = value;
    }
    
    inline System::Int32 NewDataSet::MappingRow::Font_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableMapping->Font_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'Font_Id\' de la tabla \'Mapping\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::MappingRow::Font_Id::set(System::Int32 value) {
        this[this->tableMapping->Font_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::FontRow^  NewDataSet::MappingRow::FontRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::FontRow^  >(this->GetParentRow(this->Table->ParentRelations[L"Font_Mapping"])));
    }
    inline System::Void NewDataSet::MappingRow::FontRow::set(spaceShip1414::NewDataSet::FontRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"Font_Mapping"]);
    }
    
    inline ::System::Boolean NewDataSet::MappingRow::IshorzAdvanceNull() {
        return this->IsNull(this->tableMapping->horzAdvanceColumn);
    }
    
    inline ::System::Void NewDataSet::MappingRow::SethorzAdvanceNull() {
        this[this->tableMapping->horzAdvanceColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::MappingRow::IsFont_IdNull() {
        return this->IsNull(this->tableMapping->Font_IdColumn);
    }
    
    inline ::System::Void NewDataSet::MappingRow::SetFont_IdNull() {
        this[this->tableMapping->Font_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::FontRowChangeEvent::FontRowChangeEvent(spaceShip1414::NewDataSet::FontRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::FontRow^  NewDataSet::FontRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::FontRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::MappingRowChangeEvent::MappingRowChangeEvent(spaceShip1414::NewDataSet::MappingRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::MappingRow^  NewDataSet::MappingRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::MappingRowChangeEvent::Action::get() {
        return this->eventAction;
    }
}
