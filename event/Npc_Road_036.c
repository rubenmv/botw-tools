-------- EventFlow: Npc_Road_036 --------

Actor: Npc_Road_036
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_036"), 'Flag': 'Npc_Road_036_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event10:
            Npc_Road_036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Near00'})
          case 1:
            goto Event10
          case 2:
            Event11:
            Npc_Road_036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Near01'})
          case 3:
            goto Event11
          case 4:
            Event12:
            Npc_Road_036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Near02'})
          case 5:
            goto Event12
          case 6:
            Event13:
            Npc_Road_036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Near03'})
          case 7:
            goto Event13
        }
      case 1:
        Event9:
        Npc_Road_036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Near04'})
      case 2:
        goto Event9
      case 3:
        goto Event9
    }
}

void MSG_Kyu_00() {

    call Rain()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_00_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_00'})
    }
}

void RetMSG_Kyu_00() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_00_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_00'})
    }
}

void MSG_Kyu_01() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_01_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_01'})
    }
}

void RetMSG_Kyu_01() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_01_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_01'})
    }
}

void MSG_Kyu_02() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_02_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_02'})
    }
}

void RetMSG_Kyu_02() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_02_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_02'})
    }
}

void MSG_Kyu_03() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_03_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_03'})
    }
}

void RetMSG_Kyu_03() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_03_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_03'})
    }
}

void MSG_Kyu_04() {

    call Rest()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_04_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:MSG_Kyu_04'})
    }
}

void RetMSG_Kyu_04() {

    call Rain()

    if Npc_Road_036.IsOnInstEventFlag() {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_04_1'})
    } else {
        Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:RetMSG_Kyu_04'})
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_036.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Rest_00'})
            Event68:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event54:
            Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Rest_01'})
            goto Event68
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_036.IsArriveAnchorForRain() {
            Npc_Road_036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_036:Rest_02'})
            goto Event68
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event54
      case 2:
        goto Event54
      case 3:
        goto Event54
    }
}