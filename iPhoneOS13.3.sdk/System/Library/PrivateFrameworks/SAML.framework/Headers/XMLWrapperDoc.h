//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, XMLWrapperElement, XMLWrapperQuery;

@interface XMLWrapperDoc : NSObject
{
    struct _xmlDoc _doc;
    struct _xmlNode _docNode;
    NSMutableDictionary *_namespaces;
    NSData *_xmlData;
    NSData *_schemaData;
    XMLWrapperElement *_documentElement;
    XMLWrapperQuery *_query;
}

@property(retain, nonatomic) XMLWrapperQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSDictionary *namespaces; // @synthesize namespaces=_namespaces;
@property(retain, nonatomic) XMLWrapperElement *documentElement; // @synthesize documentElement=_documentElement;
@property(retain, nonatomic) NSData *schemaData; // @synthesize schemaData=_schemaData;
@property(retain, nonatomic) NSData *xmlData; // @synthesize xmlData=_xmlData;
// - (void).cxx_destruct;
- (id)createDocumentElement:(id )arg1;
- (BOOL)setXMLDoc:(id )arg1;
- (BOOL)createDocument:(id )arg1;
- (struct _xmlDoc )docPtr;
- (struct _xmlNode )nodePtr;
- (id)xmlString:(id )arg1;
- (struct _xmlDoc )docNode:(id )arg1;
- (id)firstResultByXpathQuery:(id)arg1 error:(id )arg2;
- (id)getResultsByXpathQuery:(id)arg1 error:(id )arg2;
- (void)setNamespace:(id)arg1;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id )arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id )arg3;

@end

