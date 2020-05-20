//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
// - (void).cxx_destruct;
- (id)description;
- (id)groupID;
- (id)destinationURIs;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURIString:(id)arg1;
- (id)initWithURI:(id)arg1;

@end

