//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYObject-Protocol.h>

@class NSDictionary;

@interface SYDictionaryObject : NSObject <SYObject, NSSecureCoding>
{
    NSDictionary *_properties;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
- (id)syncId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;

@end

