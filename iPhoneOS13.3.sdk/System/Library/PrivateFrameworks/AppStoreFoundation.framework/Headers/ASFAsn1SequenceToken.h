//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreFoundation/ASFAsn1Token.h>

__attribute__((visibility("hidden")))
@interface ASFAsn1SequenceToken : ASFAsn1Token
{
    const char mReadPointer;
}

- (id)nextToken;
- (void)reset;
- (id)description;
- (id)_initWithID:(NSUInteger)arg1 class:(unsigned char)arg2 length:(NSUInteger)arg3 content:(const char )arg4 opaque:(BOOL)arg5;

@end

