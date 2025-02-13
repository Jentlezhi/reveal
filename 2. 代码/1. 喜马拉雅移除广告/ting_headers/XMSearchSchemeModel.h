//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString;

@interface XMSearchSchemeModel : NSObject <XMTableCellModelProtocol>
{
    _Bool _limitTop;
    long long _play;
    long long _itemId;
    NSString *_cover_path;
    NSString *_logo;
    NSString *_title;
    NSString *_resourceType;
    NSString *_subtitle;
    NSString *_itingURLString;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool limitTop; // @synthesize limitTop=_limitTop;
@property(retain, nonatomic) NSString *itingURLString; // @synthesize itingURLString=_itingURLString;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *cover_path; // @synthesize cover_path=_cover_path;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long play; // @synthesize play=_play;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

