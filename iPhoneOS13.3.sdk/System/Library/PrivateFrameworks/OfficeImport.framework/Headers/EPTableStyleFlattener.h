//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EPStyleFlattener.h>

@class EDTable;

__attribute__((visibility("hidden")))
@interface EPTableStyleFlattener : EPStyleFlattener
{
    EDTable *mTable;
    NSUInteger mHeaderRowCount;
    NSUInteger mTotalsRowCount;
}

// - (void).cxx_destruct;
- (void)clearCache;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)newExtractedGlobalStyleElements:(id)arg1;
- (id)styleFromObject:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (BOOL)isObjectSupported:(id)arg1;
- (int)stripeOffset:(int)arg1 row:(BOOL)arg2;

@end
