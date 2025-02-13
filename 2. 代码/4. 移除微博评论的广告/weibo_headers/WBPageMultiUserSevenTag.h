//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBTimelineTagDelegate-Protocol.h"

@class NSString;

@interface WBPageMultiUserSevenTag : WBModelObject <WBTimelineTagDelegate>
{
    _Bool _show_delete;
    long long type;
    NSString *icon;
    NSString *display_name;
    NSString *scheme;
    NSString *_tagScheme;
    NSString *_detail_title;
    NSString *_delete_title;
}

@property(nonatomic) _Bool show_delete; // @synthesize show_delete=_show_delete;
@property(retain, nonatomic) NSString *delete_title; // @synthesize delete_title=_delete_title;
@property(retain, nonatomic) NSString *detail_title; // @synthesize detail_title=_detail_title;
@property(retain, nonatomic) NSString *tagScheme; // @synthesize tagScheme=_tagScheme;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme;
@property(retain, nonatomic) NSString *display_name; // @synthesize display_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon;
@property(nonatomic) long long type; // @synthesize type;
- (void).cxx_destruct;
- (id)validUrlTypeImageURL;
@property(retain, nonatomic) NSString *url_type_pic;
@property(retain, nonatomic) NSString *oid;
@property(retain, nonatomic) NSString *name;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

