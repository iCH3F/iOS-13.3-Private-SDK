//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CPLLibraryState : NSObject
{
    BOOL _disabled;
    NSDate *_disabledDate;
    NSDate *_deleteDate;
}

@property(copy, nonatomic) NSDate *deleteDate; // @synthesize deleteDate=_deleteDate;
@property(copy, nonatomic) NSDate *disabledDate; // @synthesize disabledDate=_disabledDate;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
// - (void).cxx_destruct;

@end

