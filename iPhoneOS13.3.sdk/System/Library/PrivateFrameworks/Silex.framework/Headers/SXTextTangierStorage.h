//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPStorage.h>

@class NSCache, NSLocale, NSMutableArray, NSSet;

@interface SXTextTangierStorage : TSWPStorage
{
    BOOL _isSelectable;
    BOOL _shouldHyphenate;
//     struct os_unfair_lock_s _unfairLock;
    NSLocale *_locale;
    NSSet *_rangedExclusionPaths;
    NSMutableArray *_attachments;
    NSCache *_tokenizersCache;
}

// @property(readonly, nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
@property(retain, nonatomic) NSCache *tokenizersCache; // @synthesize tokenizersCache=_tokenizersCache;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSSet *rangedExclusionPaths; // @synthesize rangedExclusionPaths=_rangedExclusionPaths;
@property(nonatomic) BOOL shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
// - (void).cxx_destruct;
- (void)dealloc;
- (_NSRange)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2;
- (_NSRange)insertAttachmentOrFootnote:(id)arg1 range:(_NSRange)arg2;
- (BOOL)supportsSections;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2 storageKind:(int)arg3 string:(id)arg4 locale:(id)arg5;

@end

