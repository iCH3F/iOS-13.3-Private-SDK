//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDArchivedHint-Protocol.h>

@class TSWPTOCLayoutHint;
@protocol TSDHint;

__attribute__((visibility("hidden")))
@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSWPTOCLayoutHint *_hint;
}

// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
@property(retain, nonatomic) id <TSDHint> hint;

@end

