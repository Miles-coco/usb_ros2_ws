# generated from rosidl_generator_py/resource/_idl.py.em
# with input from usb_device_driver:msg/MotorsStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'motor_ids'
# Member 'positions'
# Member 'velocities'
# Member 'currents'
# Member 'torques'
# Member 'temperatures'
# Member 'statuses'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorsStates(type):
    """Metaclass of message 'MotorsStates'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('usb_device_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'usb_device_driver.msg.MotorsStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motors_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motors_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motors_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motors_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motors_states

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorsStates(metaclass=Metaclass_MotorsStates):
    """Message class 'MotorsStates'."""

    __slots__ = [
        '_timestamp',
        '_motor_ids',
        '_positions',
        '_velocities',
        '_currents',
        '_torques',
        '_temperatures',
        '_statuses',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'motor_ids': 'uint8[12]',
        'positions': 'float[12]',
        'velocities': 'float[12]',
        'currents': 'float[12]',
        'torques': 'float[12]',
        'temperatures': 'float[12]',
        'statuses': 'uint8[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        if 'motor_ids' not in kwargs:
            self.motor_ids = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.motor_ids = kwargs.get('motor_ids')
        if 'positions' not in kwargs:
            self.positions = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.positions = kwargs.get('positions')
        if 'velocities' not in kwargs:
            self.velocities = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.velocities = kwargs.get('velocities')
        if 'currents' not in kwargs:
            self.currents = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.currents = kwargs.get('currents')
        if 'torques' not in kwargs:
            self.torques = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.torques = kwargs.get('torques')
        if 'temperatures' not in kwargs:
            self.temperatures = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.temperatures = kwargs.get('temperatures')
        if 'statuses' not in kwargs:
            self.statuses = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.statuses = kwargs.get('statuses')

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if any(self.motor_ids != other.motor_ids):
            return False
        if any(self.positions != other.positions):
            return False
        if any(self.velocities != other.velocities):
            return False
        if any(self.currents != other.currents):
            return False
        if any(self.torques != other.torques):
            return False
        if any(self.temperatures != other.temperatures):
            return False
        if any(self.statuses != other.statuses):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def motor_ids(self):
        """Message field 'motor_ids'."""
        return self._motor_ids

    @motor_ids.setter
    def motor_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'motor_ids' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'motor_ids' numpy.ndarray() must have a size of 12"
            self._motor_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'motor_ids' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._motor_ids = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'positions' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'positions' numpy.ndarray() must have a size of 12"
            self._positions = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'positions' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._positions = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def velocities(self):
        """Message field 'velocities'."""
        return self._velocities

    @velocities.setter
    def velocities(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocities' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'velocities' numpy.ndarray() must have a size of 12"
            self._velocities = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocities' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocities = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def currents(self):
        """Message field 'currents'."""
        return self._currents

    @currents.setter
    def currents(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'currents' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'currents' numpy.ndarray() must have a size of 12"
            self._currents = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'currents' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._currents = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def torques(self):
        """Message field 'torques'."""
        return self._torques

    @torques.setter
    def torques(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'torques' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'torques' numpy.ndarray() must have a size of 12"
            self._torques = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'torques' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._torques = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def temperatures(self):
        """Message field 'temperatures'."""
        return self._temperatures

    @temperatures.setter
    def temperatures(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'temperatures' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'temperatures' numpy.ndarray() must have a size of 12"
            self._temperatures = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'temperatures' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._temperatures = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def statuses(self):
        """Message field 'statuses'."""
        return self._statuses

    @statuses.setter
    def statuses(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'statuses' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'statuses' numpy.ndarray() must have a size of 12"
            self._statuses = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'statuses' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._statuses = numpy.array(value, dtype=numpy.uint8)
