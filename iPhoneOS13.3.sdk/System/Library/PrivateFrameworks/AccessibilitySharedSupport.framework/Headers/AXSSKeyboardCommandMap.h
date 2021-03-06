//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_availableCommands;
    NSDictionary *_keyChordsToCommands;
    NSDictionary *_commandsToArraysOfKeyChords;
    NSDictionary *_userDefinedCommandsToKeyChords;
    NSMutableDictionary *_transientCommands;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableDictionary *transientCommands; // @synthesize transientCommands=_transientCommands;
@property(readonly, nonatomic) NSDictionary *userDefinedCommandsToKeyChords; // @synthesize userDefinedCommandsToKeyChords=_userDefinedCommandsToKeyChords;
@property(readonly, nonatomic) NSDictionary *commandsToArraysOfKeyChords; // @synthesize commandsToArraysOfKeyChords=_commandsToArraysOfKeyChords;
@property(readonly, nonatomic) NSDictionary *keyChordsToCommands; // @synthesize keyChordsToCommands=_keyChordsToCommands;
@property(retain, nonatomic) NSSet *availableCommands; // @synthesize availableCommands=_availableCommands;
// - (void).cxx_destruct;
- (void)removeTransientKeyChordsForIdentifier:(id)arg1;
- (id)addCommandsForTransientKeyChords:(id)arg1;
- (id)commandMapWithKeyChord:(id)arg1 forCommand:(id)arg2;
- (id)keyChordForCommand:(id)arg1;
- (id)commandForKeyChord:(id)arg1;
- (void)_initializeDictionariesIfNeeded;
- (BOOL)_isAvailableCommand:(id)arg1;
- (BOOL)_validateCommandsToKeyChords:(id)arg1;
- (BOOL)isEqualToCommandMap:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_initWithCommandsToKeyChordsDictionary:(id)arg1;

@end

