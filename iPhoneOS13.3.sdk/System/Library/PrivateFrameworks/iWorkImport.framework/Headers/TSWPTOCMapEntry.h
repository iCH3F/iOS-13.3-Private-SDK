//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPTOCEntryStyle;

__attribute__((visibility("hidden")))
@interface TSWPTOCMapEntry : NSObject
{
    BOOL _showInTOC;
    TSWPTOCEntryStyle *_tocEntryStyle;
}

@property(nonatomic) BOOL showInTOC; // @synthesize showInTOC=_showInTOC;
@property(retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle; // @synthesize tocEntryStyle=_tocEntryStyle;
// - (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)initWithTOCEntryStyle:(id)arg1 showInTOC:(BOOL)arg2;

@end
