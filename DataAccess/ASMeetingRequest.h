/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASEvent.h"
#import "NSCoding.h"

@class NSNumber, NSMutableDictionary, NSDate, ASEmailItem, NSString;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber* _instanceType;
	NSDate* _recurrenceId;
	NSMutableDictionary* _placeHolder;
	int _meetingClassType;
	ASEmailItem* _parentEmailItem;
	NSString* _cachedParentFolderId;
	NSString* _cachedParentServerId;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
// in a protocol: -(void)applyPlaceHolder;
// in a protocol: -(void)clearPlaceHolder;
// in a protocol: -(void)setObject:(id)object forCCPT:(int)ccpt;
// inherited: -(id)asParseRules;
// inherited: -(void)_determineSelfnessWithLocalEvent:(void*)localEvent forAccount:(id)account;
// inherited: -(void)postProcessApplicationData;
// inherited: -(BOOL)_bailIfNotNewestData;
// inherited: -(BOOL)saveToCalendarWithExistingRecord:(void*)existingRecord intoCalendar:(void*)calendar treatNullsAsDeletes:(BOOL)deletes account:(id)account;
// inherited: -(BOOL)_shouldKeepLocalExceptions;
// inherited: -(BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;
-(BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)calDBCreateAsRejected defaultCalendar:(void*)calendar account:(id)account;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
// inherited: -(id)description;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)_setReminderSecsBefore:(id)before;
-(void)takeValuesFromParentEmailForAccount:(id)account;
-(void)setOrganizer:(id)organizer;
// inherited: -(id)exceptionDate;
// inherited: -(void)setExceptionDate:(id)date;
// inherited: -(void)setDTStamp:(id)stamp;
// in a protocol: -(id)initWithCoder:(id)coder;
// in a protocol: -(void)encodeWithCoder:(id)coder;
// inherited: -(BOOL)cachedOrganizerIsSelf;
-(id)instanceType;
-(void)setInstanceType:(id)type;
-(id)recurrenceId;
-(void)setRecurrenceId:(id)anId;
-(int)meetingClassType;
-(void)setMeetingClassType:(int)type;
-(id)cachedParentFolderId;
-(void)setCachedParentFolderId:(id)anId;
-(id)cachedParentServerId;
-(void)setCachedParentServerId:(id)anId;
@end

