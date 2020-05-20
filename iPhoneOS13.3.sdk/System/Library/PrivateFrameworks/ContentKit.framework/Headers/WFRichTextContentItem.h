//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)attributedStringFromHTMLFile:(id)arg1 options:(id)arg2 documentAttributes:(id )arg3 error:(id )arg4;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)arg1;
+ (id)normalizedHTMLDocumentFromHTML:(id)arg1;
+ (id)htmlFooter;
+ (id)htmlHeader;
+ (id)attributesDictionaryForType:(id)arg1;
+ (BOOL)typeRequiresMainThread:(id)arg1;
+ (id)documentTypeForType:(id)arg1;
- (id)preferredFileType;
- (BOOL)isContent;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateAttributedString:(id /* CDUnknownBlockType */)arg1 fromFile:(id)arg2 forClass:(Class)arg3;
- (void)getFileRepresentationsForSerialization:(id /* CDUnknownBlockType */)arg1;
- (void)generateFileRepresentations:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id )arg3;
- (void)generateDataRepresentation:(id /* CDUnknownBlockType */)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (void)generateRTFDRepresentation:(id /* CDUnknownBlockType */)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;

@end

