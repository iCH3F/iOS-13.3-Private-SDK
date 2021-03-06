//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURL, PDFDocumentPrivate, PDFOutline, PDFSelection;
@protocol PDFDocumentDelegate;

@interface PDFDocument : NSObject <NSCopying>
{
    PDFDocumentPrivate *_private;
}

+ (BOOL)pdfDocumentAppendModeActiveForThisThread;
+ (void)setPDFDocumentAppendModeActiveForThisThread:(BOOL)arg1;
// - (void).cxx_destruct;
- (void)setPageChangeDelegate:(id)arg1;
- (void)setDocumentHasBurnInAnnotations:(BOOL)arg1;
- (Class)annotationSubclassForType:(id)arg1;
- (id)findPageWithCGPDFDictionaryPageRef:(CGPDFDictionary )arg1;
- (struct __CFDictionary )_createInfoDictionary;
- (id)annotationsForFieldName:(id)arg1;
- (void)setFormData:(id)arg1;
- (id)formData;
- (void)scheduledFindOnPage:(id)arg1;
- (void)cleanupFind;
- (BOOL)findOnPage;
- (void)coreFindStrings:(id)arg1;
- (void)coreFindString:(id)arg1;
- (void)normalizeFindOptions:(NSUInteger)arg1;
- (void)enqueueLayoutThreadForPage:(id)arg1;
- (id)selectionFromPage:(id)arg1 atPoint:(CGPoint)arg2 toPage:(id)arg3 atPoint:(CGPoint)arg4 type:(int)arg5;
- (BOOL)viewPreferenceRightToLeft;
- (void)resetPageAnnotationChanges;
- (id)pageAnnotationChanges;
- (BOOL)documentChanged;
- (void)revert;
- (BOOL)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (BOOL)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (id)akController;
- (id)_namedDestination:(id)arg1 forNameDictionary:(CGPDFDictionary )arg2;
- (id)namedDestination:(id)arg1;
- (void)enableLimitedSearch;
- (BOOL)bookmarksChanged;
- (void)updateBookmarksInPDFDocument;
- (id)_bookmarksCatalog;
- (id)bookmarkedPages;
- (void)setBookmarked:(BOOL)arg1 atPageIndex:(NSUInteger)arg2;
- (void)setShowsAnnotations:(BOOL)arg1;
- (BOOL)showsAnnotations;
- (id)selectionFromPage:(id)arg1 atCharacterIndex:(NSUInteger)arg2 toPage:(id)arg3 atCharacterIndex:(NSUInteger)arg4;
- (id)selectionFromPage:(id)arg1 atPoint:(CGPoint)arg2 toPage:(id)arg3 atPoint:(CGPoint)arg4;
@property(readonly, nonatomic) PDFSelection *selectionForEntireDocument;
- (void)asyncFindString:(id)arg1 withDelegate:(id)arg2 onQueue:(id)arg3;
- (void)cancelFindString;
@property(readonly, nonatomic) BOOL isFinding;
- (void)didMatchString:(id)arg1;
- (id)_findString:(id)arg1 fromSelection:(id)arg2 withOptions:(NSUInteger)arg3;
- (id)findStringPerPage:(id)arg1 fromSelection:(id)arg2 withOptions:(NSUInteger)arg3;
- (id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(NSUInteger)arg3;
- (void)beginFindStrings:(id)arg1 withOptions:(NSUInteger)arg2;
- (void)beginFindString:(id)arg1 withOptions:(NSUInteger)arg2;
- (id)findString:(id)arg1 withOptions:(NSUInteger)arg2;
@property(readonly, nonatomic) Class pageClass;
- (void)exchangePageAtIndex:(NSUInteger)arg1 withPageAtIndex:(NSUInteger)arg2;
- (void)removePageAtIndex:(NSUInteger)arg1;
- (void)insertPage:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)indexForPage:(id)arg1;
- (id)_rawPageAtIndex:(NSUInteger)arg1;
- (void)_notifyAKAdaptorPagePlaceholder:(id)arg1 wasReplacedWithPage:(id)arg2 atIndex:(NSUInteger)arg3;
- (id)pageAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger pageCount;
- (id)outlineItemForSelection:(id)arg1;
@property(retain, nonatomic) PDFOutline *outlineRoot;
- (BOOL)writeToURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)writeToURL:(id)arg1;
- (BOOL)writeToFile:(id)arg1 withOptions:(id)arg2;
- (BOOL)writeToFile:(id)arg1;
- (id)dataRepresentationWithOptions:(id)arg1;
- (id)dataRepresentation;
- (id)PDFAKControllerDelegate;
- (void)setPDFAKControllerDelegate:(id)arg1;
@property(nonatomic) __weak id <PDFDocumentDelegate> delegate;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) long long permissionsStatus;
@property(readonly, nonatomic) BOOL allowsFormFieldEntry;
@property(readonly, nonatomic) BOOL allowsCommenting;
@property(readonly, nonatomic) BOOL allowsContentAccessibility;
@property(readonly, nonatomic) BOOL allowsDocumentAssembly;
@property(readonly, nonatomic) BOOL allowsDocumentChanges;
@property(readonly, nonatomic) BOOL allowsCopying;
@property(readonly, nonatomic) BOOL allowsPrinting;
- (BOOL)_canSaveWithEncryption;
- (void)requirePasswordsIfNeeded:(id /* CDUnknownBlockType */)arg1;
- (id)passwordUsedForUnlocking;
- (BOOL)unlockWithPassword:(id)arg1;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isEncrypted;
@property(readonly, nonatomic) long long minorVersion;
@property(readonly, nonatomic) long long majorVersion;
@property(copy, nonatomic) NSDictionary *documentAttributes;
@property(readonly, nonatomic) CGPDFDocument documentRef;
@property(readonly, nonatomic) NSURL *documentURL;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setDocument:(CGPDFDocument )arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)enableDocumentMRUMode:(BOOL)arg1;
- (id)akDocumentAdaptor;
- (struct __CFData )newXMPFromData:(id)arg1 preserveExistingXMPMetadata:(BOOL)arg2;
- (void)_setDocumentCatalogMetadata:(id)arg1 withNSpace:(id)arg2 prefix:(id)arg3 rootPath:(id)arg4;
- (id)_documentCatalogMetadataForRootPath:(id)arg1 withKeys:(id)arg2;
- (void)_sanitizeAnnotationArray:(struct __CFArray )arg1;
- (void)_sanitizeAnnotationDictionary:(struct __CFDictionary )arg1;
- (CGPDFName )_convertCFStringToCGPDFName:(void )arg1 forKey:(struct __CFString )arg2;
- (CGPDFAnnotation )_createCGPDFAnnotationForAnnotation:(id)arg1;
- (BOOL)_writeAppendMode:(CGDataConsumer )arg1;
- (BOOL)canSaveWithAppendModeUsingOptions:(id)arg1;
- (BOOL)writeToConsumer:(CGDataConsumer )arg1 withOptions:(id)arg2;
- (id)_convertWriteOptions:(id)arg1;
- (id)_addEncryptionFromOptions:(id)arg1;
- (void)setRenderingProperties:(id)arg1;
- (id)renderingProperties;
- (id)_dataFromXMP:(struct __CFData )arg1 withRootPath:(id)arg2 keys:(id)arg3;
- (id)_getNearestOutline:(id)arg1 forDestination:(id)arg2;
- (id)_SASLSanitize:(id)arg1;
- (BOOL)_isNonAsciiSpace:(id)arg1;
- (BOOL)_isCommonlyMappedToNothing:(id)arg1;
- (void)setupAKDocumentAdaptorIfNecessaryWithView:(id)arg1;
- (void)_commonInit;

@end

