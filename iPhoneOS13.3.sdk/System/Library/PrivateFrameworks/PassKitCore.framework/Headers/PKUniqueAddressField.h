//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PKUniqueAddressField : NSObject
{
    NSString *_key;
    long long _index;
    NSError *_error;
    NSString *_invalidText;
}

@property(retain, nonatomic) NSString *invalidText; // @synthesize invalidText=_invalidText;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;

@end

