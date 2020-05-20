//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/BSXPCSecureCoding-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;

@interface FBSSceneIdentityToken : NSObject <BSXPCSecureCoding, BSXPCCoding, NSCopying>
{
    BSServiceConnectionEndpoint *_endpoint;
    NSString *_identifier;
    NSString *_stringRepresentation;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
// - (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithIdentifier:(id)arg1 endpoint:(id)arg2;
- (id)init;

@end

