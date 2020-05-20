//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface ADVector : NSObject <NSSecureCoding>
{
    NSArray *_vector;
    NSString *_version;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *vector; // @synthesize vector=_vector;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cosineSimilarity:(id)arg1;
- (float)magnitude;
- (id)vectorSubtract:(id)arg1;
- (id)vectorAdd:(id)arg1;
- (float)dotProduct:(id)arg1;
- (id)scalarMultiply:(float)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithVersion:(id)arg1 andArray:(id)arg2;

@end

