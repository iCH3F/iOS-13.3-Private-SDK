//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@interface TRHandshakeResponse : TRResponseMessage
{
    long long _protocolVersion;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

