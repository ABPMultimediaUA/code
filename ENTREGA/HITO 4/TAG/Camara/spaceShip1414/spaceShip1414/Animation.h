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
        public : ref class AnimationsDataTable;
        public : ref class AnimationDefinitionDataTable;
        public : ref class AffectorDataTable;
        public : ref class KeyFrameDataTable;
        public : ref class SubscriptionDataTable;
        public : ref class AnimationsRow;
        public : ref class AnimationDefinitionRow;
        public : ref class AffectorRow;
        public : ref class KeyFrameRow;
        public : ref class SubscriptionRow;
        public : ref class AnimationsRowChangeEvent;
        public : ref class AnimationDefinitionRowChangeEvent;
        public : ref class AffectorRowChangeEvent;
        public : ref class KeyFrameRowChangeEvent;
        public : ref class SubscriptionRowChangeEvent;
        
        private: spaceShip1414::NewDataSet::AnimationsDataTable^  tableAnimations;
        
        private: spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  tableAnimationDefinition;
        
        private: spaceShip1414::NewDataSet::AffectorDataTable^  tableAffector;
        
        private: spaceShip1414::NewDataSet::KeyFrameDataTable^  tableKeyFrame;
        
        private: spaceShip1414::NewDataSet::SubscriptionDataTable^  tableSubscription;
        
        private: ::System::Data::DataRelation^  relationAnimations_AnimationDefinition;
        
        private: ::System::Data::DataRelation^  relationAnimationDefinition_Affector;
        
        private: ::System::Data::DataRelation^  relationAffector_KeyFrame;
        
        private: ::System::Data::DataRelation^  relationAnimationDefinition_Subscription;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void AnimationsRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::AnimationsRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void AnimationDefinitionRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void AffectorRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::AffectorRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void KeyFrameRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::KeyFrameRowChangeEvent^  e);
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void SubscriptionRowChangeEventHandler(::System::Object^  sender, spaceShip1414::NewDataSet::SubscriptionRowChangeEvent^  e);
        
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
        property spaceShip1414::NewDataSet::AnimationsDataTable^  Animations {
            spaceShip1414::NewDataSet::AnimationsDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  AnimationDefinition {
            spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::AffectorDataTable^  Affector {
            spaceShip1414::NewDataSet::AffectorDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::KeyFrameDataTable^  KeyFrame {
            spaceShip1414::NewDataSet::KeyFrameDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property spaceShip1414::NewDataSet::SubscriptionDataTable^  Subscription {
            spaceShip1414::NewDataSet::SubscriptionDataTable^  get();
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
        ::System::Boolean ShouldSerializeAnimations();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeAnimationDefinition();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeAffector();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeKeyFrame();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeSubscription();
        
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
        ref class AnimationsDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnAnimations_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationsRowChangeEventHandler^  AnimationsRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationsRowChangeEventHandler^  AnimationsRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationsRowChangeEventHandler^  AnimationsRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationsRowChangeEventHandler^  AnimationsRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationsDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationsDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationsDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Animations_IdColumn {
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
            property spaceShip1414::NewDataSet::AnimationsRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::AnimationsRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddAnimationsRow(spaceShip1414::NewDataSet::AnimationsRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::AnimationsRow^  AddAnimationsRow();
            
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
            spaceShip1414::NewDataSet::AnimationsRow^  NewAnimationsRow();
            
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
            ::System::Void RemoveAnimationsRow(spaceShip1414::NewDataSet::AnimationsRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class AnimationDefinitionDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnname;
            
            private: ::System::Data::DataColumn^  columnduration;
            
            private: ::System::Data::DataColumn^  columnreplayMode;
            
            private: ::System::Data::DataColumn^  columnautoStart;
            
            private: ::System::Data::DataColumn^  columnAnimationDefinition_Id;
            
            private: ::System::Data::DataColumn^  columnAnimations_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEventHandler^  AnimationDefinitionRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEventHandler^  AnimationDefinitionRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEventHandler^  AnimationDefinitionRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEventHandler^  AnimationDefinitionRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationDefinitionDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationDefinitionDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationDefinitionDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  nameColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  durationColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  replayModeColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  autoStartColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  AnimationDefinition_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Animations_IdColumn {
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
            property spaceShip1414::NewDataSet::AnimationDefinitionRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::AnimationDefinitionRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddAnimationDefinitionRow(spaceShip1414::NewDataSet::AnimationDefinitionRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::AnimationDefinitionRow^  AddAnimationDefinitionRow(System::String^  name, System::Decimal duration, 
                        System::String^  replayMode, System::Boolean autoStart, spaceShip1414::NewDataSet::AnimationsRow^  parentAnimationsRowByAnimations_AnimationDefinition);
            
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
            spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewAnimationDefinitionRow();
            
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
            ::System::Void RemoveAnimationDefinitionRow(spaceShip1414::NewDataSet::AnimationDefinitionRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class AffectorDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnapplicationMethod;
            
            private: ::System::Data::DataColumn^  column_property;
            
            private: ::System::Data::DataColumn^  columninterpolator;
            
            private: ::System::Data::DataColumn^  columnAffector_Id;
            
            private: ::System::Data::DataColumn^  columnAnimationDefinition_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AffectorRowChangeEventHandler^  AffectorRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AffectorRowChangeEventHandler^  AffectorRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AffectorRowChangeEventHandler^  AffectorRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::AffectorRowChangeEventHandler^  AffectorRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AffectorDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AffectorDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AffectorDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  applicationMethodColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  _propertyColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  interpolatorColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Affector_IdColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  AnimationDefinition_IdColumn {
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
            property spaceShip1414::NewDataSet::AffectorRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::AffectorRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddAffectorRow(spaceShip1414::NewDataSet::AffectorRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::AffectorRow^  AddAffectorRow(System::String^  applicationMethod, System::String^  _property, 
                        System::String^  interpolator, spaceShip1414::NewDataSet::AnimationDefinitionRow^  parentAnimationDefinitionRowByAnimationDefinition_Affector);
            
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
            spaceShip1414::NewDataSet::AffectorRow^  NewAffectorRow();
            
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
            ::System::Void RemoveAffectorRow(spaceShip1414::NewDataSet::AffectorRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class KeyFrameDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnposition;
            
            private: ::System::Data::DataColumn^  column_value;
            
            private: ::System::Data::DataColumn^  columnprogression;
            
            private: ::System::Data::DataColumn^  columnsourceProperty;
            
            private: ::System::Data::DataColumn^  columnAffector_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::KeyFrameRowChangeEventHandler^  KeyFrameRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::KeyFrameRowChangeEventHandler^  KeyFrameRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::KeyFrameRowChangeEventHandler^  KeyFrameRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::KeyFrameRowChangeEventHandler^  KeyFrameRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            KeyFrameDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            KeyFrameDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            KeyFrameDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  positionColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  _valueColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  progressionColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  sourcePropertyColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  Affector_IdColumn {
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
            property spaceShip1414::NewDataSet::KeyFrameRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::KeyFrameRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddKeyFrameRow(spaceShip1414::NewDataSet::KeyFrameRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::KeyFrameRow^  AddKeyFrameRow(System::Decimal position, System::String^  _value, System::String^  progression, 
                        System::String^  sourceProperty, spaceShip1414::NewDataSet::AffectorRow^  parentAffectorRowByAffector_KeyFrame);
            
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
            spaceShip1414::NewDataSet::KeyFrameRow^  NewKeyFrameRow();
            
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
            ::System::Void RemoveKeyFrameRow(spaceShip1414::NewDataSet::KeyFrameRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class SubscriptionDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  column_event;
            
            private: ::System::Data::DataColumn^  columnaction;
            
            private: ::System::Data::DataColumn^  columnAnimationDefinition_Id;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::SubscriptionRowChangeEventHandler^  SubscriptionRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::SubscriptionRowChangeEventHandler^  SubscriptionRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::SubscriptionRowChangeEventHandler^  SubscriptionRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event spaceShip1414::NewDataSet::SubscriptionRowChangeEventHandler^  SubscriptionRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SubscriptionDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SubscriptionDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SubscriptionDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  _eventColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  actionColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  AnimationDefinition_IdColumn {
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
            property spaceShip1414::NewDataSet::SubscriptionRow^  default [::System::Int32 ] {
                spaceShip1414::NewDataSet::SubscriptionRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddSubscriptionRow(spaceShip1414::NewDataSet::SubscriptionRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            spaceShip1414::NewDataSet::SubscriptionRow^  AddSubscriptionRow(System::String^  _event, System::String^  action, 
                        spaceShip1414::NewDataSet::AnimationDefinitionRow^  parentAnimationDefinitionRowByAnimationDefinition_Subscription);
            
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
            spaceShip1414::NewDataSet::SubscriptionRow^  NewSubscriptionRow();
            
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
            ::System::Void RemoveSubscriptionRow(spaceShip1414::NewDataSet::SubscriptionRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class AnimationsRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::AnimationsDataTable^  tableAnimations;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationsRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 Animations_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::AnimationDefinitionRow^  >^  GetAnimationDefinitionRows();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class AnimationDefinitionRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  tableAnimationDefinition;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationDefinitionRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  name {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Decimal duration {
                System::Decimal get();
                System::Void set(System::Decimal value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  replayMode {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Boolean autoStart {
                System::Boolean get();
                System::Void set(System::Boolean value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 AnimationDefinition_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 Animations_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AnimationsRow^  AnimationsRow {
                spaceShip1414::NewDataSet::AnimationsRow^  get();
                System::Void set(spaceShip1414::NewDataSet::AnimationsRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsreplayModeNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetreplayModeNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsautoStartNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetautoStartNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsAnimations_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetAnimations_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::AffectorRow^  >^  GetAffectorRows();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::SubscriptionRow^  >^  GetSubscriptionRows();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class AffectorRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::AffectorDataTable^  tableAffector;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AffectorRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  applicationMethod {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  _property {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  interpolator {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 Affector_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 AnimationDefinition_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AnimationDefinitionRow^  AnimationDefinitionRow {
                spaceShip1414::NewDataSet::AnimationDefinitionRow^  get();
                System::Void set(spaceShip1414::NewDataSet::AnimationDefinitionRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsapplicationMethodNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetapplicationMethodNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsAnimationDefinition_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetAnimationDefinition_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            cli::array< spaceShip1414::NewDataSet::KeyFrameRow^  >^  GetKeyFrameRows();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class KeyFrameRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::KeyFrameDataTable^  tableKeyFrame;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            KeyFrameRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Decimal position {
                System::Decimal get();
                System::Void set(System::Decimal value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  _value {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  progression {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  sourceProperty {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 Affector_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AffectorRow^  AffectorRow {
                spaceShip1414::NewDataSet::AffectorRow^  get();
                System::Void set(spaceShip1414::NewDataSet::AffectorRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is_valueNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set_valueNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsprogressionNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetprogressionNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IssourcePropertyNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetsourcePropertyNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsAffector_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetAffector_IdNull();
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class SubscriptionRow : public ::System::Data::DataRow {
            
            private: spaceShip1414::NewDataSet::SubscriptionDataTable^  tableSubscription;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SubscriptionRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  _event {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  action {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 AnimationDefinition_Id {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AnimationDefinitionRow^  AnimationDefinitionRow {
                spaceShip1414::NewDataSet::AnimationDefinitionRow^  get();
                System::Void set(spaceShip1414::NewDataSet::AnimationDefinitionRow^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean IsAnimationDefinition_IdNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void SetAnimationDefinition_IdNull();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class AnimationsRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::AnimationsRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationsRowChangeEvent(spaceShip1414::NewDataSet::AnimationsRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AnimationsRow^  Row {
                spaceShip1414::NewDataSet::AnimationsRow^  get();
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
        ref class AnimationDefinitionRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::AnimationDefinitionRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AnimationDefinitionRowChangeEvent(spaceShip1414::NewDataSet::AnimationDefinitionRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AnimationDefinitionRow^  Row {
                spaceShip1414::NewDataSet::AnimationDefinitionRow^  get();
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
        ref class AffectorRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::AffectorRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            AffectorRowChangeEvent(spaceShip1414::NewDataSet::AffectorRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::AffectorRow^  Row {
                spaceShip1414::NewDataSet::AffectorRow^  get();
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
        ref class KeyFrameRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::KeyFrameRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            KeyFrameRowChangeEvent(spaceShip1414::NewDataSet::KeyFrameRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::KeyFrameRow^  Row {
                spaceShip1414::NewDataSet::KeyFrameRow^  get();
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
        ref class SubscriptionRowChangeEvent : public ::System::EventArgs {
            
            private: spaceShip1414::NewDataSet::SubscriptionRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SubscriptionRowChangeEvent(spaceShip1414::NewDataSet::SubscriptionRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property spaceShip1414::NewDataSet::SubscriptionRow^  Row {
                spaceShip1414::NewDataSet::SubscriptionRow^  get();
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
            if (ds->Tables[L"Animations"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AnimationsDataTable(ds->Tables[L"Animations"])));
            }
            if (ds->Tables[L"AnimationDefinition"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AnimationDefinitionDataTable(ds->Tables[L"AnimationDefinition"])));
            }
            if (ds->Tables[L"Affector"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AffectorDataTable(ds->Tables[L"Affector"])));
            }
            if (ds->Tables[L"KeyFrame"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::KeyFrameDataTable(ds->Tables[L"KeyFrame"])));
            }
            if (ds->Tables[L"Subscription"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::SubscriptionDataTable(ds->Tables[L"Subscription"])));
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
    
    inline spaceShip1414::NewDataSet::AnimationsDataTable^  NewDataSet::Animations::get() {
        return this->tableAnimations;
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  NewDataSet::AnimationDefinition::get() {
        return this->tableAnimationDefinition;
    }
    
    inline spaceShip1414::NewDataSet::AffectorDataTable^  NewDataSet::Affector::get() {
        return this->tableAffector;
    }
    
    inline spaceShip1414::NewDataSet::KeyFrameDataTable^  NewDataSet::KeyFrame::get() {
        return this->tableKeyFrame;
    }
    
    inline spaceShip1414::NewDataSet::SubscriptionDataTable^  NewDataSet::Subscription::get() {
        return this->tableSubscription;
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
            if (ds->Tables[L"Animations"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AnimationsDataTable(ds->Tables[L"Animations"])));
            }
            if (ds->Tables[L"AnimationDefinition"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AnimationDefinitionDataTable(ds->Tables[L"AnimationDefinition"])));
            }
            if (ds->Tables[L"Affector"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::AffectorDataTable(ds->Tables[L"Affector"])));
            }
            if (ds->Tables[L"KeyFrame"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::KeyFrameDataTable(ds->Tables[L"KeyFrame"])));
            }
            if (ds->Tables[L"Subscription"] != nullptr) {
                __super::Tables->Add((gcnew spaceShip1414::NewDataSet::SubscriptionDataTable(ds->Tables[L"Subscription"])));
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
        this->tableAnimations = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsDataTable^  >(__super::Tables[L"Animations"]));
        if (initTable == true) {
            if (this->tableAnimations != nullptr) {
                this->tableAnimations->InitVars();
            }
        }
        this->tableAnimationDefinition = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  >(__super::Tables[L"AnimationDefinition"]));
        if (initTable == true) {
            if (this->tableAnimationDefinition != nullptr) {
                this->tableAnimationDefinition->InitVars();
            }
        }
        this->tableAffector = (cli::safe_cast<spaceShip1414::NewDataSet::AffectorDataTable^  >(__super::Tables[L"Affector"]));
        if (initTable == true) {
            if (this->tableAffector != nullptr) {
                this->tableAffector->InitVars();
            }
        }
        this->tableKeyFrame = (cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameDataTable^  >(__super::Tables[L"KeyFrame"]));
        if (initTable == true) {
            if (this->tableKeyFrame != nullptr) {
                this->tableKeyFrame->InitVars();
            }
        }
        this->tableSubscription = (cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionDataTable^  >(__super::Tables[L"Subscription"]));
        if (initTable == true) {
            if (this->tableSubscription != nullptr) {
                this->tableSubscription->InitVars();
            }
        }
        this->relationAnimations_AnimationDefinition = this->Relations[L"Animations_AnimationDefinition"];
        this->relationAnimationDefinition_Affector = this->Relations[L"AnimationDefinition_Affector"];
        this->relationAffector_KeyFrame = this->Relations[L"Affector_KeyFrame"];
        this->relationAnimationDefinition_Subscription = this->Relations[L"AnimationDefinition_Subscription"];
    }
    
    inline ::System::Void NewDataSet::InitClass() {
        this->DataSetName = L"NewDataSet";
        this->Prefix = L"";
        this->Locale = (gcnew ::System::Globalization::CultureInfo(L""));
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableAnimations = (gcnew spaceShip1414::NewDataSet::AnimationsDataTable());
        __super::Tables->Add(this->tableAnimations);
        this->tableAnimationDefinition = (gcnew spaceShip1414::NewDataSet::AnimationDefinitionDataTable());
        __super::Tables->Add(this->tableAnimationDefinition);
        this->tableAffector = (gcnew spaceShip1414::NewDataSet::AffectorDataTable());
        __super::Tables->Add(this->tableAffector);
        this->tableKeyFrame = (gcnew spaceShip1414::NewDataSet::KeyFrameDataTable());
        __super::Tables->Add(this->tableKeyFrame);
        this->tableSubscription = (gcnew spaceShip1414::NewDataSet::SubscriptionDataTable());
        __super::Tables->Add(this->tableSubscription);
        ::System::Data::ForeignKeyConstraint^  fkc;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"Animations_AnimationDefinition", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimations->Animations_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimationDefinition->Animations_IdColumn}));
        this->tableAnimationDefinition->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"AnimationDefinition_Affector", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimationDefinition->AnimationDefinition_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAffector->AnimationDefinition_IdColumn}));
        this->tableAffector->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"Affector_KeyFrame", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAffector->Affector_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableKeyFrame->Affector_IdColumn}));
        this->tableKeyFrame->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"AnimationDefinition_Subscription", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimationDefinition->AnimationDefinition_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableSubscription->AnimationDefinition_IdColumn}));
        this->tableSubscription->Constraints->Add(fkc);
        fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
        fkc->DeleteRule = ::System::Data::Rule::Cascade;
        fkc->UpdateRule = ::System::Data::Rule::Cascade;
        this->relationAnimations_AnimationDefinition = (gcnew ::System::Data::DataRelation(L"Animations_AnimationDefinition", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimations->Animations_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimationDefinition->Animations_IdColumn}, false));
        this->relationAnimations_AnimationDefinition->Nested = true;
        this->Relations->Add(this->relationAnimations_AnimationDefinition);
        this->relationAnimationDefinition_Affector = (gcnew ::System::Data::DataRelation(L"AnimationDefinition_Affector", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimationDefinition->AnimationDefinition_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAffector->AnimationDefinition_IdColumn}, false));
        this->relationAnimationDefinition_Affector->Nested = true;
        this->Relations->Add(this->relationAnimationDefinition_Affector);
        this->relationAffector_KeyFrame = (gcnew ::System::Data::DataRelation(L"Affector_KeyFrame", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAffector->Affector_IdColumn}, 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableKeyFrame->Affector_IdColumn}, false));
        this->relationAffector_KeyFrame->Nested = true;
        this->Relations->Add(this->relationAffector_KeyFrame);
        this->relationAnimationDefinition_Subscription = (gcnew ::System::Data::DataRelation(L"AnimationDefinition_Subscription", 
            gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableAnimationDefinition->AnimationDefinition_IdColumn}, gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableSubscription->AnimationDefinition_IdColumn}, 
            false));
        this->relationAnimationDefinition_Subscription->Nested = true;
        this->Relations->Add(this->relationAnimationDefinition_Subscription);
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeAnimations() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeAnimationDefinition() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeAffector() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeKeyFrame() {
        return false;
    }
    
    inline ::System::Boolean NewDataSet::ShouldSerializeSubscription() {
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
    
    
    inline NewDataSet::AnimationsDataTable::AnimationsDataTable() {
        this->TableName = L"Animations";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::AnimationsDataTable::AnimationsDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::AnimationsDataTable::AnimationsDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationsDataTable::Animations_IdColumn::get() {
        return this->columnAnimations_Id;
    }
    
    inline ::System::Int32 NewDataSet::AnimationsDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::AnimationsRow^  NewDataSet::AnimationsDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::AddAnimationsRow(spaceShip1414::NewDataSet::AnimationsRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::AnimationsRow^  NewDataSet::AnimationsDataTable::AddAnimationsRow() {
        spaceShip1414::NewDataSet::AnimationsRow^  rowAnimationsRow = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(1) {nullptr};
        rowAnimationsRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowAnimationsRow);
        return rowAnimationsRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::AnimationsDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AnimationsDataTable::Clone() {
        spaceShip1414::NewDataSet::AnimationsDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AnimationsDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::AnimationsDataTable());
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::InitVars() {
        this->columnAnimations_Id = __super::Columns[L"Animations_Id"];
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::InitClass() {
        this->columnAnimations_Id = (gcnew ::System::Data::DataColumn(L"Animations_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAnimations_Id);
        this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnAnimations_Id}, 
                true)));
        this->columnAnimations_Id->AutoIncrement = true;
        this->columnAnimations_Id->AllowDBNull = false;
        this->columnAnimations_Id->Unique = true;
    }
    
    inline spaceShip1414::NewDataSet::AnimationsRow^  NewDataSet::AnimationsDataTable::NewAnimationsRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::AnimationsDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::AnimationsRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::AnimationsDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::AnimationsRow::typeid;
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->AnimationsRowChanged(this, (gcnew spaceShip1414::NewDataSet::AnimationsRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->AnimationsRowChanging(this, (gcnew spaceShip1414::NewDataSet::AnimationsRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->AnimationsRowDeleted(this, (gcnew spaceShip1414::NewDataSet::AnimationsRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->AnimationsRowDeleting(this, (gcnew spaceShip1414::NewDataSet::AnimationsRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationsDataTable::RemoveAnimationsRow(spaceShip1414::NewDataSet::AnimationsRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::AnimationsDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"AnimationsDataTable";
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
    
    
    inline NewDataSet::AnimationDefinitionDataTable::AnimationDefinitionDataTable() {
        this->TableName = L"AnimationDefinition";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::AnimationDefinitionDataTable::AnimationDefinitionDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::AnimationDefinitionDataTable::AnimationDefinitionDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationDefinitionDataTable::nameColumn::get() {
        return this->columnname;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationDefinitionDataTable::durationColumn::get() {
        return this->columnduration;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationDefinitionDataTable::replayModeColumn::get() {
        return this->columnreplayMode;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationDefinitionDataTable::autoStartColumn::get() {
        return this->columnautoStart;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationDefinitionDataTable::AnimationDefinition_IdColumn::get() {
        return this->columnAnimationDefinition_Id;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AnimationDefinitionDataTable::Animations_IdColumn::get() {
        return this->columnAnimations_Id;
    }
    
    inline ::System::Int32 NewDataSet::AnimationDefinitionDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewDataSet::AnimationDefinitionDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::AddAnimationDefinitionRow(spaceShip1414::NewDataSet::AnimationDefinitionRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewDataSet::AnimationDefinitionDataTable::AddAnimationDefinitionRow(
                System::String^  name, System::Decimal duration, System::String^  replayMode, System::Boolean autoStart, spaceShip1414::NewDataSet::AnimationsRow^  parentAnimationsRowByAnimations_AnimationDefinition) {
        spaceShip1414::NewDataSet::AnimationDefinitionRow^  rowAnimationDefinitionRow = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(6) {name, duration, replayMode, 
            autoStart, nullptr, nullptr};
        if (parentAnimationsRowByAnimations_AnimationDefinition != nullptr) {
            columnValuesArray[5] = parentAnimationsRowByAnimations_AnimationDefinition[0];
        }
        rowAnimationDefinitionRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowAnimationDefinitionRow);
        return rowAnimationDefinitionRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::AnimationDefinitionDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AnimationDefinitionDataTable::Clone() {
        spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AnimationDefinitionDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::AnimationDefinitionDataTable());
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::InitVars() {
        this->columnname = __super::Columns[L"name"];
        this->columnduration = __super::Columns[L"duration"];
        this->columnreplayMode = __super::Columns[L"replayMode"];
        this->columnautoStart = __super::Columns[L"autoStart"];
        this->columnAnimationDefinition_Id = __super::Columns[L"AnimationDefinition_Id"];
        this->columnAnimations_Id = __super::Columns[L"Animations_Id"];
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::InitClass() {
        this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnname);
        this->columnduration = (gcnew ::System::Data::DataColumn(L"duration", ::System::Decimal::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnduration);
        this->columnreplayMode = (gcnew ::System::Data::DataColumn(L"replayMode", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnreplayMode);
        this->columnautoStart = (gcnew ::System::Data::DataColumn(L"autoStart", ::System::Boolean::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnautoStart);
        this->columnAnimationDefinition_Id = (gcnew ::System::Data::DataColumn(L"AnimationDefinition_Id", ::System::Int32::typeid, 
            nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAnimationDefinition_Id);
        this->columnAnimations_Id = (gcnew ::System::Data::DataColumn(L"Animations_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAnimations_Id);
        this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnAnimationDefinition_Id}, 
                true)));
        this->columnname->AllowDBNull = false;
        this->columnname->Namespace = L"";
        this->columnduration->AllowDBNull = false;
        this->columnduration->Namespace = L"";
        this->columnreplayMode->Namespace = L"";
        this->columnreplayMode->DefaultValue = (cli::safe_cast<System::String^  >(L"loop"));
        this->columnautoStart->Namespace = L"";
        this->columnautoStart->DefaultValue = static_cast<System::Boolean>(false);
        this->columnAnimationDefinition_Id->AutoIncrement = true;
        this->columnAnimationDefinition_Id->AllowDBNull = false;
        this->columnAnimationDefinition_Id->Unique = true;
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewDataSet::AnimationDefinitionDataTable::NewAnimationDefinitionRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::AnimationDefinitionDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::AnimationDefinitionRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::AnimationDefinitionDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::AnimationDefinitionRow::typeid;
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->AnimationDefinitionRowChanged(this, (gcnew spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->AnimationDefinitionRowChanging(this, (gcnew spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->AnimationDefinitionRowDeleted(this, (gcnew spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->AnimationDefinitionRowDeleting(this, (gcnew spaceShip1414::NewDataSet::AnimationDefinitionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionDataTable::RemoveAnimationDefinitionRow(spaceShip1414::NewDataSet::AnimationDefinitionRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::AnimationDefinitionDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"AnimationDefinitionDataTable";
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
    
    
    inline NewDataSet::AffectorDataTable::AffectorDataTable() {
        this->TableName = L"Affector";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::AffectorDataTable::AffectorDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::AffectorDataTable::AffectorDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AffectorDataTable::applicationMethodColumn::get() {
        return this->columnapplicationMethod;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AffectorDataTable::_propertyColumn::get() {
        return this->column_property;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AffectorDataTable::interpolatorColumn::get() {
        return this->columninterpolator;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AffectorDataTable::Affector_IdColumn::get() {
        return this->columnAffector_Id;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::AffectorDataTable::AnimationDefinition_IdColumn::get() {
        return this->columnAnimationDefinition_Id;
    }
    
    inline ::System::Int32 NewDataSet::AffectorDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::AffectorRow^  NewDataSet::AffectorDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::AddAffectorRow(spaceShip1414::NewDataSet::AffectorRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::AffectorRow^  NewDataSet::AffectorDataTable::AddAffectorRow(System::String^  applicationMethod, 
                System::String^  _property, System::String^  interpolator, spaceShip1414::NewDataSet::AnimationDefinitionRow^  parentAnimationDefinitionRowByAnimationDefinition_Affector) {
        spaceShip1414::NewDataSet::AffectorRow^  rowAffectorRow = (cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(5) {applicationMethod, 
            _property, interpolator, nullptr, nullptr};
        if (parentAnimationDefinitionRowByAnimationDefinition_Affector != nullptr) {
            columnValuesArray[4] = parentAnimationDefinitionRowByAnimationDefinition_Affector[4];
        }
        rowAffectorRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowAffectorRow);
        return rowAffectorRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::AffectorDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AffectorDataTable::Clone() {
        spaceShip1414::NewDataSet::AffectorDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::AffectorDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::AffectorDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::AffectorDataTable());
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::InitVars() {
        this->columnapplicationMethod = __super::Columns[L"applicationMethod"];
        this->column_property = __super::Columns[L"property"];
        this->columninterpolator = __super::Columns[L"interpolator"];
        this->columnAffector_Id = __super::Columns[L"Affector_Id"];
        this->columnAnimationDefinition_Id = __super::Columns[L"AnimationDefinition_Id"];
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::InitClass() {
        this->columnapplicationMethod = (gcnew ::System::Data::DataColumn(L"applicationMethod", ::System::String::typeid, nullptr, 
            ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnapplicationMethod);
        this->column_property = (gcnew ::System::Data::DataColumn(L"property", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->column_property);
        this->columninterpolator = (gcnew ::System::Data::DataColumn(L"interpolator", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columninterpolator);
        this->columnAffector_Id = (gcnew ::System::Data::DataColumn(L"Affector_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAffector_Id);
        this->columnAnimationDefinition_Id = (gcnew ::System::Data::DataColumn(L"AnimationDefinition_Id", ::System::Int32::typeid, 
            nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAnimationDefinition_Id);
        this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnAffector_Id}, 
                true)));
        this->columnapplicationMethod->Namespace = L"";
        this->columnapplicationMethod->DefaultValue = (cli::safe_cast<System::String^  >(L"absolute"));
        this->column_property->AllowDBNull = false;
        this->column_property->Namespace = L"";
        this->columninterpolator->AllowDBNull = false;
        this->columninterpolator->Namespace = L"";
        this->columnAffector_Id->AutoIncrement = true;
        this->columnAffector_Id->AllowDBNull = false;
        this->columnAffector_Id->Unique = true;
    }
    
    inline spaceShip1414::NewDataSet::AffectorRow^  NewDataSet::AffectorDataTable::NewAffectorRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::AffectorDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::AffectorRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::AffectorDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::AffectorRow::typeid;
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->AffectorRowChanged(this, (gcnew spaceShip1414::NewDataSet::AffectorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->AffectorRowChanging(this, (gcnew spaceShip1414::NewDataSet::AffectorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->AffectorRowDeleted(this, (gcnew spaceShip1414::NewDataSet::AffectorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->AffectorRowDeleting(this, (gcnew spaceShip1414::NewDataSet::AffectorRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::AffectorDataTable::RemoveAffectorRow(spaceShip1414::NewDataSet::AffectorRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::AffectorDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"AffectorDataTable";
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
    
    
    inline NewDataSet::KeyFrameDataTable::KeyFrameDataTable() {
        this->TableName = L"KeyFrame";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::KeyFrameDataTable::KeyFrameDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::KeyFrameDataTable::KeyFrameDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::KeyFrameDataTable::positionColumn::get() {
        return this->columnposition;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::KeyFrameDataTable::_valueColumn::get() {
        return this->column_value;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::KeyFrameDataTable::progressionColumn::get() {
        return this->columnprogression;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::KeyFrameDataTable::sourcePropertyColumn::get() {
        return this->columnsourceProperty;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::KeyFrameDataTable::Affector_IdColumn::get() {
        return this->columnAffector_Id;
    }
    
    inline ::System::Int32 NewDataSet::KeyFrameDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::KeyFrameRow^  NewDataSet::KeyFrameDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::AddKeyFrameRow(spaceShip1414::NewDataSet::KeyFrameRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::KeyFrameRow^  NewDataSet::KeyFrameDataTable::AddKeyFrameRow(System::Decimal position, 
                System::String^  _value, System::String^  progression, System::String^  sourceProperty, spaceShip1414::NewDataSet::AffectorRow^  parentAffectorRowByAffector_KeyFrame) {
        spaceShip1414::NewDataSet::KeyFrameRow^  rowKeyFrameRow = (cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(5) {position, _value, progression, 
            sourceProperty, nullptr};
        if (parentAffectorRowByAffector_KeyFrame != nullptr) {
            columnValuesArray[4] = parentAffectorRowByAffector_KeyFrame[3];
        }
        rowKeyFrameRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowKeyFrameRow);
        return rowKeyFrameRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::KeyFrameDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::KeyFrameDataTable::Clone() {
        spaceShip1414::NewDataSet::KeyFrameDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::KeyFrameDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::KeyFrameDataTable());
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::InitVars() {
        this->columnposition = __super::Columns[L"position"];
        this->column_value = __super::Columns[L"value"];
        this->columnprogression = __super::Columns[L"progression"];
        this->columnsourceProperty = __super::Columns[L"sourceProperty"];
        this->columnAffector_Id = __super::Columns[L"Affector_Id"];
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::InitClass() {
        this->columnposition = (gcnew ::System::Data::DataColumn(L"position", ::System::Decimal::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnposition);
        this->column_value = (gcnew ::System::Data::DataColumn(L"value", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->column_value);
        this->columnprogression = (gcnew ::System::Data::DataColumn(L"progression", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnprogression);
        this->columnsourceProperty = (gcnew ::System::Data::DataColumn(L"sourceProperty", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnsourceProperty);
        this->columnAffector_Id = (gcnew ::System::Data::DataColumn(L"Affector_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAffector_Id);
        this->columnposition->AllowDBNull = false;
        this->columnposition->Namespace = L"";
        this->column_value->Namespace = L"";
        this->column_value->DefaultValue = (cli::safe_cast<System::String^  >(L""));
        this->columnprogression->Namespace = L"";
        this->columnprogression->DefaultValue = (cli::safe_cast<System::String^  >(L""));
        this->columnsourceProperty->Namespace = L"";
        this->columnsourceProperty->DefaultValue = (cli::safe_cast<System::String^  >(L""));
    }
    
    inline spaceShip1414::NewDataSet::KeyFrameRow^  NewDataSet::KeyFrameDataTable::NewKeyFrameRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::KeyFrameDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::KeyFrameRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::KeyFrameDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::KeyFrameRow::typeid;
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->KeyFrameRowChanged(this, (gcnew spaceShip1414::NewDataSet::KeyFrameRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->KeyFrameRowChanging(this, (gcnew spaceShip1414::NewDataSet::KeyFrameRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->KeyFrameRowDeleted(this, (gcnew spaceShip1414::NewDataSet::KeyFrameRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->KeyFrameRowDeleting(this, (gcnew spaceShip1414::NewDataSet::KeyFrameRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::KeyFrameDataTable::RemoveKeyFrameRow(spaceShip1414::NewDataSet::KeyFrameRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::KeyFrameDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"KeyFrameDataTable";
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
    
    
    inline NewDataSet::SubscriptionDataTable::SubscriptionDataTable() {
        this->TableName = L"Subscription";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline NewDataSet::SubscriptionDataTable::SubscriptionDataTable(::System::Data::DataTable^  table) {
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
    
    inline NewDataSet::SubscriptionDataTable::SubscriptionDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::SubscriptionDataTable::_eventColumn::get() {
        return this->column_event;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::SubscriptionDataTable::actionColumn::get() {
        return this->columnaction;
    }
    
    inline ::System::Data::DataColumn^  NewDataSet::SubscriptionDataTable::AnimationDefinition_IdColumn::get() {
        return this->columnAnimationDefinition_Id;
    }
    
    inline ::System::Int32 NewDataSet::SubscriptionDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline spaceShip1414::NewDataSet::SubscriptionRow^  NewDataSet::SubscriptionDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::AddSubscriptionRow(spaceShip1414::NewDataSet::SubscriptionRow^  row) {
        this->Rows->Add(row);
    }
    
    inline spaceShip1414::NewDataSet::SubscriptionRow^  NewDataSet::SubscriptionDataTable::AddSubscriptionRow(System::String^  _event, 
                System::String^  action, spaceShip1414::NewDataSet::AnimationDefinitionRow^  parentAnimationDefinitionRowByAnimationDefinition_Subscription) {
        spaceShip1414::NewDataSet::SubscriptionRow^  rowSubscriptionRow = (cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {_event, action, nullptr};
        if (parentAnimationDefinitionRowByAnimationDefinition_Subscription != nullptr) {
            columnValuesArray[2] = parentAnimationDefinitionRowByAnimationDefinition_Subscription[4];
        }
        rowSubscriptionRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowSubscriptionRow);
        return rowSubscriptionRow;
    }
    
    inline ::System::Collections::IEnumerator^  NewDataSet::SubscriptionDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  NewDataSet::SubscriptionDataTable::Clone() {
        spaceShip1414::NewDataSet::SubscriptionDataTable^  cln = (cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  NewDataSet::SubscriptionDataTable::CreateInstance() {
        return (gcnew spaceShip1414::NewDataSet::SubscriptionDataTable());
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::InitVars() {
        this->column_event = __super::Columns[L"event"];
        this->columnaction = __super::Columns[L"action"];
        this->columnAnimationDefinition_Id = __super::Columns[L"AnimationDefinition_Id"];
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::InitClass() {
        this->column_event = (gcnew ::System::Data::DataColumn(L"event", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->column_event);
        this->columnaction = (gcnew ::System::Data::DataColumn(L"action", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnaction);
        this->columnAnimationDefinition_Id = (gcnew ::System::Data::DataColumn(L"AnimationDefinition_Id", ::System::Int32::typeid, 
            nullptr, ::System::Data::MappingType::Hidden));
        __super::Columns->Add(this->columnAnimationDefinition_Id);
        this->column_event->AllowDBNull = false;
        this->column_event->Namespace = L"";
        this->columnaction->AllowDBNull = false;
        this->columnaction->Namespace = L"";
    }
    
    inline spaceShip1414::NewDataSet::SubscriptionRow^  NewDataSet::SubscriptionDataTable::NewSubscriptionRow() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  NewDataSet::SubscriptionDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew spaceShip1414::NewDataSet::SubscriptionRow(builder));
    }
    
    inline ::System::Type^  NewDataSet::SubscriptionDataTable::GetRowType() {
        return spaceShip1414::NewDataSet::SubscriptionRow::typeid;
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->SubscriptionRowChanged(this, (gcnew spaceShip1414::NewDataSet::SubscriptionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->SubscriptionRowChanging(this, (gcnew spaceShip1414::NewDataSet::SubscriptionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->SubscriptionRowDeleted(this, (gcnew spaceShip1414::NewDataSet::SubscriptionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->SubscriptionRowDeleting(this, (gcnew spaceShip1414::NewDataSet::SubscriptionRowChangeEvent((cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void NewDataSet::SubscriptionDataTable::RemoveSubscriptionRow(spaceShip1414::NewDataSet::SubscriptionRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::SubscriptionDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
        attribute2->FixedValue = L"SubscriptionDataTable";
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
    
    
    inline NewDataSet::AnimationsRow::AnimationsRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableAnimations = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsDataTable^  >(this->Table));
    }
    
    inline System::Int32 NewDataSet::AnimationsRow::Animations_Id::get() {
        return (cli::safe_cast<::System::Int32 >(this[this->tableAnimations->Animations_IdColumn]));
    }
    inline System::Void NewDataSet::AnimationsRow::Animations_Id::set(System::Int32 value) {
        this[this->tableAnimations->Animations_IdColumn] = value;
    }
    
    inline cli::array< spaceShip1414::NewDataSet::AnimationDefinitionRow^  >^  NewDataSet::AnimationsRow::GetAnimationDefinitionRows() {
        if (this->Table->ChildRelations[L"Animations_AnimationDefinition"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::AnimationDefinitionRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"Animations_AnimationDefinition"])));
        }
    }
    
    
    inline NewDataSet::AnimationDefinitionRow::AnimationDefinitionRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableAnimationDefinition = (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::AnimationDefinitionRow::name::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableAnimationDefinition->nameColumn]));
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::name::set(System::String^  value) {
        this[this->tableAnimationDefinition->nameColumn] = value;
    }
    
    inline System::Decimal NewDataSet::AnimationDefinitionRow::duration::get() {
        return (cli::safe_cast<::System::Decimal >(this[this->tableAnimationDefinition->durationColumn]));
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::duration::set(System::Decimal value) {
        this[this->tableAnimationDefinition->durationColumn] = value;
    }
    
    inline System::String^  NewDataSet::AnimationDefinitionRow::replayMode::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableAnimationDefinition->replayModeColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'replayMode\' de la tabla \'AnimationDefinition\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::replayMode::set(System::String^  value) {
        this[this->tableAnimationDefinition->replayModeColumn] = value;
    }
    
    inline System::Boolean NewDataSet::AnimationDefinitionRow::autoStart::get() {
        try {
            return (cli::safe_cast<::System::Boolean >(this[this->tableAnimationDefinition->autoStartColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'autoStart\' de la tabla \'AnimationDefinition\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::autoStart::set(System::Boolean value) {
        this[this->tableAnimationDefinition->autoStartColumn] = value;
    }
    
    inline System::Int32 NewDataSet::AnimationDefinitionRow::AnimationDefinition_Id::get() {
        return (cli::safe_cast<::System::Int32 >(this[this->tableAnimationDefinition->AnimationDefinition_IdColumn]));
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::AnimationDefinition_Id::set(System::Int32 value) {
        this[this->tableAnimationDefinition->AnimationDefinition_IdColumn] = value;
    }
    
    inline System::Int32 NewDataSet::AnimationDefinitionRow::Animations_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableAnimationDefinition->Animations_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'Animations_Id\' de la tabla \'AnimationDefinition\' es DBNul" 
L"l.", 
                e));
        }
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::Animations_Id::set(System::Int32 value) {
        this[this->tableAnimationDefinition->Animations_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::AnimationsRow^  NewDataSet::AnimationDefinitionRow::AnimationsRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationsRow^  >(this->GetParentRow(this->Table->ParentRelations[L"Animations_AnimationDefinition"])));
    }
    inline System::Void NewDataSet::AnimationDefinitionRow::AnimationsRow::set(spaceShip1414::NewDataSet::AnimationsRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"Animations_AnimationDefinition"]);
    }
    
    inline ::System::Boolean NewDataSet::AnimationDefinitionRow::IsreplayModeNull() {
        return this->IsNull(this->tableAnimationDefinition->replayModeColumn);
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionRow::SetreplayModeNull() {
        this[this->tableAnimationDefinition->replayModeColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::AnimationDefinitionRow::IsautoStartNull() {
        return this->IsNull(this->tableAnimationDefinition->autoStartColumn);
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionRow::SetautoStartNull() {
        this[this->tableAnimationDefinition->autoStartColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::AnimationDefinitionRow::IsAnimations_IdNull() {
        return this->IsNull(this->tableAnimationDefinition->Animations_IdColumn);
    }
    
    inline ::System::Void NewDataSet::AnimationDefinitionRow::SetAnimations_IdNull() {
        this[this->tableAnimationDefinition->Animations_IdColumn] = ::System::Convert::DBNull;
    }
    
    inline cli::array< spaceShip1414::NewDataSet::AffectorRow^  >^  NewDataSet::AnimationDefinitionRow::GetAffectorRows() {
        if (this->Table->ChildRelations[L"AnimationDefinition_Affector"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::AffectorRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::AffectorRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"AnimationDefinition_Affector"])));
        }
    }
    
    inline cli::array< spaceShip1414::NewDataSet::SubscriptionRow^  >^  NewDataSet::AnimationDefinitionRow::GetSubscriptionRows() {
        if (this->Table->ChildRelations[L"AnimationDefinition_Subscription"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::SubscriptionRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::SubscriptionRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"AnimationDefinition_Subscription"])));
        }
    }
    
    
    inline NewDataSet::AffectorRow::AffectorRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableAffector = (cli::safe_cast<spaceShip1414::NewDataSet::AffectorDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::AffectorRow::applicationMethod::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableAffector->applicationMethodColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'applicationMethod\' de la tabla \'Affector\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::AffectorRow::applicationMethod::set(System::String^  value) {
        this[this->tableAffector->applicationMethodColumn] = value;
    }
    
    inline System::String^  NewDataSet::AffectorRow::_property::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableAffector->_propertyColumn]));
    }
    inline System::Void NewDataSet::AffectorRow::_property::set(System::String^  value) {
        this[this->tableAffector->_propertyColumn] = value;
    }
    
    inline System::String^  NewDataSet::AffectorRow::interpolator::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableAffector->interpolatorColumn]));
    }
    inline System::Void NewDataSet::AffectorRow::interpolator::set(System::String^  value) {
        this[this->tableAffector->interpolatorColumn] = value;
    }
    
    inline System::Int32 NewDataSet::AffectorRow::Affector_Id::get() {
        return (cli::safe_cast<::System::Int32 >(this[this->tableAffector->Affector_IdColumn]));
    }
    inline System::Void NewDataSet::AffectorRow::Affector_Id::set(System::Int32 value) {
        this[this->tableAffector->Affector_IdColumn] = value;
    }
    
    inline System::Int32 NewDataSet::AffectorRow::AnimationDefinition_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableAffector->AnimationDefinition_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'AnimationDefinition_Id\' de la tabla \'Affector\' es DBNull." 
L"", 
                e));
        }
    }
    inline System::Void NewDataSet::AffectorRow::AnimationDefinition_Id::set(System::Int32 value) {
        this[this->tableAffector->AnimationDefinition_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewDataSet::AffectorRow::AnimationDefinitionRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(this->GetParentRow(this->Table->ParentRelations[L"AnimationDefinition_Affector"])));
    }
    inline System::Void NewDataSet::AffectorRow::AnimationDefinitionRow::set(spaceShip1414::NewDataSet::AnimationDefinitionRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"AnimationDefinition_Affector"]);
    }
    
    inline ::System::Boolean NewDataSet::AffectorRow::IsapplicationMethodNull() {
        return this->IsNull(this->tableAffector->applicationMethodColumn);
    }
    
    inline ::System::Void NewDataSet::AffectorRow::SetapplicationMethodNull() {
        this[this->tableAffector->applicationMethodColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::AffectorRow::IsAnimationDefinition_IdNull() {
        return this->IsNull(this->tableAffector->AnimationDefinition_IdColumn);
    }
    
    inline ::System::Void NewDataSet::AffectorRow::SetAnimationDefinition_IdNull() {
        this[this->tableAffector->AnimationDefinition_IdColumn] = ::System::Convert::DBNull;
    }
    
    inline cli::array< spaceShip1414::NewDataSet::KeyFrameRow^  >^  NewDataSet::AffectorRow::GetKeyFrameRows() {
        if (this->Table->ChildRelations[L"Affector_KeyFrame"] == nullptr) {
            return gcnew cli::array< spaceShip1414::NewDataSet::KeyFrameRow^  >(0);
        }
        else {
            return (cli::safe_cast<cli::array< spaceShip1414::NewDataSet::KeyFrameRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"Affector_KeyFrame"])));
        }
    }
    
    
    inline NewDataSet::KeyFrameRow::KeyFrameRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableKeyFrame = (cli::safe_cast<spaceShip1414::NewDataSet::KeyFrameDataTable^  >(this->Table));
    }
    
    inline System::Decimal NewDataSet::KeyFrameRow::position::get() {
        return (cli::safe_cast<::System::Decimal >(this[this->tableKeyFrame->positionColumn]));
    }
    inline System::Void NewDataSet::KeyFrameRow::position::set(System::Decimal value) {
        this[this->tableKeyFrame->positionColumn] = value;
    }
    
    inline System::String^  NewDataSet::KeyFrameRow::_value::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableKeyFrame->_valueColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'value\' de la tabla \'KeyFrame\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::KeyFrameRow::_value::set(System::String^  value) {
        this[this->tableKeyFrame->_valueColumn] = value;
    }
    
    inline System::String^  NewDataSet::KeyFrameRow::progression::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableKeyFrame->progressionColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'progression\' de la tabla \'KeyFrame\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::KeyFrameRow::progression::set(System::String^  value) {
        this[this->tableKeyFrame->progressionColumn] = value;
    }
    
    inline System::String^  NewDataSet::KeyFrameRow::sourceProperty::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableKeyFrame->sourcePropertyColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'sourceProperty\' de la tabla \'KeyFrame\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::KeyFrameRow::sourceProperty::set(System::String^  value) {
        this[this->tableKeyFrame->sourcePropertyColumn] = value;
    }
    
    inline System::Int32 NewDataSet::KeyFrameRow::Affector_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableKeyFrame->Affector_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'Affector_Id\' de la tabla \'KeyFrame\' es DBNull.", 
                e));
        }
    }
    inline System::Void NewDataSet::KeyFrameRow::Affector_Id::set(System::Int32 value) {
        this[this->tableKeyFrame->Affector_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::AffectorRow^  NewDataSet::KeyFrameRow::AffectorRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AffectorRow^  >(this->GetParentRow(this->Table->ParentRelations[L"Affector_KeyFrame"])));
    }
    inline System::Void NewDataSet::KeyFrameRow::AffectorRow::set(spaceShip1414::NewDataSet::AffectorRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"Affector_KeyFrame"]);
    }
    
    inline ::System::Boolean NewDataSet::KeyFrameRow::Is_valueNull() {
        return this->IsNull(this->tableKeyFrame->_valueColumn);
    }
    
    inline ::System::Void NewDataSet::KeyFrameRow::Set_valueNull() {
        this[this->tableKeyFrame->_valueColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::KeyFrameRow::IsprogressionNull() {
        return this->IsNull(this->tableKeyFrame->progressionColumn);
    }
    
    inline ::System::Void NewDataSet::KeyFrameRow::SetprogressionNull() {
        this[this->tableKeyFrame->progressionColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::KeyFrameRow::IssourcePropertyNull() {
        return this->IsNull(this->tableKeyFrame->sourcePropertyColumn);
    }
    
    inline ::System::Void NewDataSet::KeyFrameRow::SetsourcePropertyNull() {
        this[this->tableKeyFrame->sourcePropertyColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean NewDataSet::KeyFrameRow::IsAffector_IdNull() {
        return this->IsNull(this->tableKeyFrame->Affector_IdColumn);
    }
    
    inline ::System::Void NewDataSet::KeyFrameRow::SetAffector_IdNull() {
        this[this->tableKeyFrame->Affector_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::SubscriptionRow::SubscriptionRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableSubscription = (cli::safe_cast<spaceShip1414::NewDataSet::SubscriptionDataTable^  >(this->Table));
    }
    
    inline System::String^  NewDataSet::SubscriptionRow::_event::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableSubscription->_eventColumn]));
    }
    inline System::Void NewDataSet::SubscriptionRow::_event::set(System::String^  value) {
        this[this->tableSubscription->_eventColumn] = value;
    }
    
    inline System::String^  NewDataSet::SubscriptionRow::action::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tableSubscription->actionColumn]));
    }
    inline System::Void NewDataSet::SubscriptionRow::action::set(System::String^  value) {
        this[this->tableSubscription->actionColumn] = value;
    }
    
    inline System::Int32 NewDataSet::SubscriptionRow::AnimationDefinition_Id::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableSubscription->AnimationDefinition_IdColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"El valor de la columna \'AnimationDefinition_Id\' de la tabla \'Subscription\' es DBN" 
L"ull.", 
                e));
        }
    }
    inline System::Void NewDataSet::SubscriptionRow::AnimationDefinition_Id::set(System::Int32 value) {
        this[this->tableSubscription->AnimationDefinition_IdColumn] = value;
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewDataSet::SubscriptionRow::AnimationDefinitionRow::get() {
        return (cli::safe_cast<spaceShip1414::NewDataSet::AnimationDefinitionRow^  >(this->GetParentRow(this->Table->ParentRelations[L"AnimationDefinition_Subscription"])));
    }
    inline System::Void NewDataSet::SubscriptionRow::AnimationDefinitionRow::set(spaceShip1414::NewDataSet::AnimationDefinitionRow^  value) {
        this->SetParentRow(value, this->Table->ParentRelations[L"AnimationDefinition_Subscription"]);
    }
    
    inline ::System::Boolean NewDataSet::SubscriptionRow::IsAnimationDefinition_IdNull() {
        return this->IsNull(this->tableSubscription->AnimationDefinition_IdColumn);
    }
    
    inline ::System::Void NewDataSet::SubscriptionRow::SetAnimationDefinition_IdNull() {
        this[this->tableSubscription->AnimationDefinition_IdColumn] = ::System::Convert::DBNull;
    }
    
    
    inline NewDataSet::AnimationsRowChangeEvent::AnimationsRowChangeEvent(spaceShip1414::NewDataSet::AnimationsRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::AnimationsRow^  NewDataSet::AnimationsRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::AnimationsRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::AnimationDefinitionRowChangeEvent::AnimationDefinitionRowChangeEvent(spaceShip1414::NewDataSet::AnimationDefinitionRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::AnimationDefinitionRow^  NewDataSet::AnimationDefinitionRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::AnimationDefinitionRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::AffectorRowChangeEvent::AffectorRowChangeEvent(spaceShip1414::NewDataSet::AffectorRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::AffectorRow^  NewDataSet::AffectorRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::AffectorRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::KeyFrameRowChangeEvent::KeyFrameRowChangeEvent(spaceShip1414::NewDataSet::KeyFrameRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::KeyFrameRow^  NewDataSet::KeyFrameRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::KeyFrameRowChangeEvent::Action::get() {
        return this->eventAction;
    }
    
    
    inline NewDataSet::SubscriptionRowChangeEvent::SubscriptionRowChangeEvent(spaceShip1414::NewDataSet::SubscriptionRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline spaceShip1414::NewDataSet::SubscriptionRow^  NewDataSet::SubscriptionRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction NewDataSet::SubscriptionRowChangeEvent::Action::get() {
        return this->eventAction;
    }
}
