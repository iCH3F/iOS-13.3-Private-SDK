//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface AXHAPacket : NSObject
{
    NSUInteger _totalLength;
    NSMutableData *_data;
}

+ (id)packetWithHeader:(CDStruct_6d9e24e6)arg1;
+ (CDStruct_6d9e24e6)headerFromData:(id)arg1;
+ (id)packetDataWithPayload:(id)arg1;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)objectPayload;
- (id)dataPayload;
- (NSUInteger)missingLength;
- (id)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithHeader:(CDStruct_6d9e24e6)arg1;

@end

