//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@interface MMMessageBoxSettingControlsSettingsItem : WBModelObject
{
    long long _receive_type;
    long long _show_type;
    long long _remind_type;
    long long _is_allow_create;
    long long _is_remind;
    long long _common_cmt;
}

@property(nonatomic) long long common_cmt; // @synthesize common_cmt=_common_cmt;
@property(nonatomic) long long is_remind; // @synthesize is_remind=_is_remind;
@property(nonatomic) long long is_allow_create; // @synthesize is_allow_create=_is_allow_create;
@property(nonatomic) long long remind_type; // @synthesize remind_type=_remind_type;
@property(nonatomic) long long show_type; // @synthesize show_type=_show_type;
@property(nonatomic) long long receive_type; // @synthesize receive_type=_receive_type;
- (_Bool)updateWithDictionary:(id)arg1;

@end

