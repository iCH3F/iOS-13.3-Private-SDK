//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBTextColumnSection-Protocol.h>

@class NSArray, NSData;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>
{
    BOOL _textNoWrap;
    unsigned int _textWeight;
    NSArray *_textLines;
}

@property(nonatomic) unsigned int textWeight; // @synthesize textWeight=_textWeight;
@property(nonatomic) BOOL textNoWrap; // @synthesize textNoWrap=_textNoWrap;
@property(copy, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)textLinesAtIndex:(NSUInteger)arg1;
- (NSUInteger)textLinesCount;
- (void)addTextLines:(id)arg1;
- (void)clearTextLines;
- (id)initWithFacade:(id)arg1;

@end
