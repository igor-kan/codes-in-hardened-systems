"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 424."""

def spec_graphene_hardened_malloc_424() -> dict:
    return {"system": "GrapheneOS", "spec_id": 424, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_424():
    s = spec_graphene_hardened_malloc_424()
    assert s["spec_id"] == 424
