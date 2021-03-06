//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, NSURL, NSUUID, TSKDocumentRoot, TSUImage, TSUProgressContext;
@protocol TSDImportExportDelegate;

@protocol TSKImporter <NSObject>
- (void)setProgressContext:(TSUProgressContext *)arg1;
- (TSUProgressContext *)progressContext;
- (BOOL)stylesheetUpdatesRequired;
- (NSString *)initialTemplateName;
- (void)quit;
- (void)cancel;
- (BOOL)importToDocumentRoot:(TSKDocumentRoot *)arg1 delegate:(id <TSDImportExportDelegate>)arg2 error:(id )arg3;
- (void)setURL:(NSURL *)arg1;
- (id)initWithURL:(NSURL *)arg1;

@optional
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
- (NSUUID *)uuidOfImportedDocument;
- (TSUImage *)thumbnailImage;
- (NSArray *)buildVersionHistory;
- (BOOL)importStartsWithThemeOnly;
- (BOOL)postprocessRegularDocumentRoot:(TSKDocumentRoot *)arg1 delegate:(id <TSDImportExportDelegate>)arg2;
- (NSUInteger)initialVariantIndex;
@end

