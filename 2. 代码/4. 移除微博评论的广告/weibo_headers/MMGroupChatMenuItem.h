//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface MMGroupChatMenuItem : WBModelObject
{
    long long _ID;
    NSString *_title;
    NSString *_name;
    NSString *_icon;
    long long _unread;
    NSString *_scheme;
}

@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) long long unread; // @synthesize unread=_unread;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;

@end

