//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CoreDAVSRVResourceRecord : NSObject
{
    NSString *_serviceString;
    NSNumber *_priority;
    NSNumber *_weight;
    NSNumber *_port;
    NSString *_target;
}

@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *serviceString; // @synthesize serviceString=_serviceString;
// - (void).cxx_destruct;
- (id)description;

@end

